#Alex Shelton
#Bash For Beginners #7


#==========================
# Program: For loops && While loops
#==========================
#!/usr/bin/env bash


#For loops:

# for((i=0; i < 10; i++)); do
#   echo "$i"
# done


#For loop similar to python

names='Alex Jack Bob Suzy Sandy Sophia'
# for name in $names
# do
#   echo "Hello ${name}"
# done
#



#For loop to list all shell files in Folder
# files=$(ls *.sh) #terminal command in shell
# c=1
# for file in $files
# do
#   echo "File#${c} $file"
#   ((c++))
# done


#While loop

line=1
while read -r text
do
  echo "${line}: ${text}"
  ((line++))
  #include file below
done <"./sample.txt" #how to include file to read from
