#Alex Shelton
#Bash For Beginners #8


#===================
# Program: Functions
#===================
#!/usr/bin/env bash

#Simple Function:

# function sayHello(){
#   echo "Hello"
# }
# sayHello

#Function with parameter
# function greet(){
#   echo "Hello $1, my name is $2"
# }
# read -p "Enter your name: " name
#
# #function call
# greet "bob" "$name"


#Function to do something on computer

function makeDirectoryAndFile(){
   #creating a directory
  touch "/hi/hello.txt" #make a file to path
  echo "Hello World, this was created with a function! " >> "hi/hello.txt" #specify the write location
}
