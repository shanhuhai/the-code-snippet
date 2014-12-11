#!/bin/bash
branch=$(ls | grep $1)
echo "result: $branch"
if [ -n "$branch" ]; then
    echo "exits"
else
    echo "not exist"
fi
