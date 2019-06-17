#Alex Shelton
#Bash For Beginners #5


#==============================================================================================
# Program: Covers conditional syntax for comparing vars as well as syntax for file information
#==============================================================================================

#!/usr/bin/env bash


#                 Comparasin syntax                     #
#########################################################
# val1 -eq val2 returns true if values are equal
# val1 -ne val2 returns true if values are not equal
# val1 -gt val2 returns true if val1 is greater than val 2
# val1 -lt val2 returns true if val1 is less than val2
# val1 -ge val2 returns true if val1 is >= val2
# val1 -le val2 returns true if val1 is <= val2
#########################################################

echo "We are going to compare 2 different numbers"
read -p "enter your first number: " NUM1
read -p "enter your seccond number: " NUM2

if [ $NUM1 -eq $NUM2 ]
then
  echo "The numbers you entered are same"
elif [ $NUM1 -lt $NUM2 ]
then
  echo "The seccond number you inputted ($NUM2) was larger: $NUM2 > $NUM1"
elif [ $NUM1 -gt $NUM2 ]
then
  echo "The first number you inputted ($NUM1) was larger: $NUM1 > $NUM2"
fi

# FILE CONDITIONS: in current folder:
#               File Compare syntax                       #
###########################################################
# -d file   True if the file is a directory
# -e file   True if the file exists (note that this is not particularly portable, thus -f is generally used)
# -f file   True if the provided string is a file
# -g file   True if the group id is set on a file
# -r file   True if the file is readable
# -s file   True if the file has a non-zero size
# -u        True if the user id is set on a file
# -w        True if the file is writable
# -x        True if the file is an executable
###########################################################

echo -e "\nNow we will look at files within the computer"
read -p "Enter a file name: " FILE
echo "" #free console
if [ -f "$FILE" ]
then
  echo "$FILE is a file"
  if [ -r "$FILE" ]
  then
    echo "The file is also readable"
  fi
  if [[ -w "$FILE" ]]; then
    echo "The file is also writable"
  fi
else
  echo "File is not a file"
fi

echo -e '\nChecking if file is an executable'
if [ -x "$FILE" ]
then
  echo "The file is an executable"
else
  echo "File is not an executable"
fi


echo -e "\nChecking if the file exists: "
if [[ -e "$FILE" ]]; then
  echo "File exists!"
else
  echo "File does not exist :( "
fi
