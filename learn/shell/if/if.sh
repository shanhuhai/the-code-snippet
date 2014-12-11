#!/bin/bash

ping xxxx
if [ $? = 0 ]; then
    echo "OK"
else

    echo $?
    echo "NOT OK "
fi
