#!/bin/bash

#echo $(uname);
declare num=1000;

uname()
{
    echo $1;
    echo "test!";
    ((num++));
    return 100;
}

testvar()
{
    local num=10;
    ((num++));
    echo $num;
}

uname xx;
echo $?
