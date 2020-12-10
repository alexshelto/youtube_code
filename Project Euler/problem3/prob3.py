#Alex Shelton
#Project Euler Problem 3:

# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143 ?

#Answer =  6857

#Get the factors in a list using % Done
# Checking if the number is prime or not: Done
# finding largest prime
import math
import time

def getFactors(n):
    factors = []
    for num in range(1, int(math.sqrt(n))+1):
        if n %  num == 0: #divides evenly
            factors.append(num)
            factors.append(n // num)
    return factors


def isPrime(n):
    return len(getFactors(n)) == 2

start = time.time()
largestPrime = 0
listOfFactors = getFactors(600851475143)
for factor in listOfFactors:
    if(isPrime(factor) and factor > largestPrime):
        largestPrime = factor

print(largestPrime)
end = time.time()

print(end - start)
