#!/bin/bash

function fsum()
{
    echo $1,$2
    return $(($1+$2))
}
fsum 3 2;
