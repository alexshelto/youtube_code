#Alex Shelton
#Bash For Beginners #3


#======================
#Covering:            |
#Script Arguments     |
#======================

#!/usr/bin/env bash


# $0 Program name
echo 'Program name: '$0

#arguments by index
echo "First Arg: $1"
echo "2nd Arg: $2"
echo "3rd Arg: $3"

#Number of argunments
echo "Arguments:" $#


#List of arguments $*
echo 'List of arguments: '$*
