#Alex Shelton
#Bash For Beginners #2


#======================
#Covering:            |
#Variables & inputs   |
#======================

#!/usr/bin/env bash

#bash variables = untyped #


##Strings
myString='This is my string'
doubleString="string with double quotes"

##Integars
myInt=19

##Floats/Doubles
myDecimal=10.0032423


##Lists () vs []
listClean=('Alex Program',19)

















# # # Booleans:
# isTrue='true'
#
# if [${isTrue}='true']; then
#   echo 'True!'
# fi



# # What is considered true in bash
# true    #yes
# [0]     #yes
# [1]     #yes
# ['a']   #yes
# ['']    #no
# [ $x ]  #no
