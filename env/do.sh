#!/bin/bash -ex

if [ $# -lt 2 ]; then
  echo "Usage: $(basename $0) COMMAND HOSTNAME"
  exit 1
fi

COMMAND=$1

DEFAULT_USER=ubuntu
MACHINE_HOSTNAME=$2
MACHINE=${DEFAULT_USER}@${MACHINE_HOSTNAME}
HOMEDIR=/home/${DEFAULT_USER}

function install_base {
  scp awscreds.sh ${MACHINE}:${HOMEDIR}/.awscreds.sh
  scp ggrc ${MACHINE}:${HOMEDIR}/.ggrc
  scp vimrc ${MACHINE}:${HOMEDIR}/.vimrc
  scp tmux.conf ${MACHINE}:${HOMEDIR}/.tmux.conf

  ssh ${MACHINE} <<'ENDSSH'
cp /etc/bash_completion.d/git-prompt ~/.git-prompt.sh
cd ~
git clone https://github.com/stanfordsnr/gg-results
git config --global user.name "Sadjad Fouladi"
git config --global user.email sfouladi@gmail.com
sudo apt update -qq
sudo apt install -y -qq mosh
sudo apt-get install -y gcc-7 g++-7 automake autoconf libtool make curl \
                        unzip wget git pkg-config tmux
sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-7 99
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-7 99
ENDSSH

  cat append-to-bashrc | ssh ${MACHINE} "cat >>~/.bashrc"
}

function install_gg {
  ssh ${MACHINE} <<'ENDSSH'
cd ~/gg-results/gg
./0-install-deps.sh
./1-fetch.sh
./2-build.sh
ENDSSH
}

function install_icecc_master {
  ssh ${MACHINE} <<'ENDSSH'
sudo apt-get install -y icecc
sudo sed -i 's/^ICECC_MAX_JOBS="1"/ICECC_MAX_JOBS="1"/' /etc/icecc/icecc.conf
sudo service icecc-scheduler restart
sudo service iceccd restart
ENDSSH
}

function install_icecc_slave {
  read -p "icecc master ip address: " ICECC_MASTER
  ssh ${MACHINE} <<'ENDSSH'
sudo apt-get install -y icecc
sudo sed -i "s/^ICECC_SCHEDULER_HOST=\".*\"/ICECC_SCHEDULER_HOST=\"${ICECC_MASTER}\"/" /etc/icecc/icecc.conf
sudo service iceccd restart
ENDSSH
}

function install_ccache {
  ssh ${MACHINE} <<'ENDSSH'
sudo apt install -y ccache
ENDSSH
}

function connect_to {
  mosh ${MACHINE}
}

case "$COMMAND" in
  install-base)
    install_base
    ;;

  install-gg)
    install_gg
    ;;

  install-icecc-master)
    install_icecc_master
    ;;

  install-icecc-slave)
    install_icecc_slave
    ;;

  connect)
    connect_to
    ;;

  *)
    echo "invalid command"
    exit 1
esac
