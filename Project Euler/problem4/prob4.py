#Alex Shelton
#Project Euler Problem 4

#--------------------Prompt--------------------------------------------------
# A palindromic number reads the same both ways. The largest palindrome made
# from the product of two 2-digit numbers is 9009 = 91 × 99.
#
# Find the largest palindrome made from the product of two 3-digit numbers.

#calculate palindromes -> isPalindrome()
#calculate the largest palindrome

import time

def getPalindrome(n):
    palindromes = []
    for num0 in range(1, n+1):
        for num1 in range(1, n+1):
            possiblePalindrome = num0 * num1
            if isPalindrome(possiblePalindrome):
                palindromes.append(possiblePalindrome)
    return palindromes


def isPalindrome(num):
    temp = num #holding the origanl value
    revNum = 0
    while(num > 0):
        digit = num%10
        revNum = revNum*10+digit
        num = num // 10
    return(revNum == temp)


start = time.time()
listNums = getPalindrome(999)
highest = 0
for num in listNums:
    if num > highest:
        highest = num
end = time.time()
print("answer: " + str(highest))
print(end - start)
