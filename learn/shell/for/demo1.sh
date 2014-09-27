#!/bin/bash 
REDIS_PATH="/usr/local/redis"
for x in $(ls ${REDIS_PATH}/redis.*.conf)
do 
    echo $x
done
