#!/bin/bash
read line
arr=(${line// / })
branch=${arr[2]:11}

/home/git/script/rsync-remote $branch sample



