#!/bin/bash

des="dummy1"
curr="dummy2"

while [[ $des != $curr ]]; do
  des=`kubectl get deploy | tail -1 | awk '{print $2}'`
  curr=`kubectl get deploy | tail -1 | awk '{print $5}'`
  sleep .5
done

echo "Scaling complete"

