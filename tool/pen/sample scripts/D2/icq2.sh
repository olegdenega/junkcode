#!/bin/bash
for hostname in $(cat icqSrv.txt);do
	host $hostname | grep 'has address'
done