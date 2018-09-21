#!/bin/bash

kubectl create -f simple-deploy.yaml # One replica for health check
kubectl scale deployment/simple-deploy --replicas=0
sleep 10 # Wait for scaling to 0 to complete
kubectl scale deployment/simple-deploy --replicas=1000
/usr/bin/time -v bash ./monitor_kube.sh # Time how long until all are Available
kubectl delete -f simple-deploy.yaml
