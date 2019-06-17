#Alex Shelton
#Bash For Beginners #4


#======================
#Covering:
#Conditionals: if, elif, else
#======================

#!/usr/bin/env bash

#Take a name as an argument





if [ "$1" == 'Alex' ]
then
  echo "Wow we have the same name! "

elif [ "$1" == 'Bob' ]; then
  echo "Hello Bob"

else
  echo "I have never heard of the name "$1
fi
