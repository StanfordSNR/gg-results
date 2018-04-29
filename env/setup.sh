#!/bin/bash -ex

cp awscreds.sh ~/.awscreds.sh
cp ggrc ~/.ggrc
cp /etc/bash_completion.d/git-prompt ~/.git-prompt.sh
cat append-to-bashrc >>~/.bashrc

git config --global user.name "Sadjad Fouladi"
git config --global user.email "sfouladi@gmail.com"
