#!/usr/bin/env bash

#This is a comment

#printing hello world

echo "What: $0"
echo "This is $1"
NAME=$1

echo "Hello $NAME"
echo "The arg count is $#"
# echo $* #all arguments
# echo "$@" #all arguments in list

LIST=[1,2,3,4]
ARGS=$@
echo $ARGS
echo $LIST
