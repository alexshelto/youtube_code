#Alex Shelton
#Project Euler Problem #5

#----------Prompt----------#
# 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
#
# What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#answer = 232792560
# runtime: 0.028399944305419922


#Loop through numbers until we find the first
# is the number is divisable 1-20 %

import time

def findNum():
    num = 2520
    found = False
    while found == False:
        num += 2520
        found = isDivisable(num)
    return num

def isDivisable(n):
    check_list = [11,13,14,16,17,18,19,20]
    for num in check_list:
        if n % num != 0:
            return False
    return True


start = time.time()
number = findNum()
end = time.time()
print(number)
print(end - start)
