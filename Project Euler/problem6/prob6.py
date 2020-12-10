#Alex Shelton
#Project Euler Problem #6

#----------Prompt----------#
# The sum of the squares of the first ten natural numbers is,
# 12 + 22 + ... + 102 = 385
#
# The square of the sum of the first ten natural numbers is,
# (1 + 2 + ... + 10)2 = 552 = 3025
#
# Hence the difference between the sum of the squares of the first ten natural numbers
# and the square of the sum is 3025 − 385 = 2640.
#
# Find the difference between the sum of the squares of the first one hundred
# natural numbers and the square of the sum.

#Answer: 25164150

import time

#combined: sum0 = sum of squares, sum1 = square of sums:
sum0 = 0
sum1 = 0
start = time.time()
for i in range(1,100+1):
    sum0 += i**2
    sum1 += i
sum1 = sum1 ** 2
end = time.time()
print("Sum of squares: " + str(sum0))
print("Square of sums: " + str(sum1))
print("Difference: "+ str(sum1 - sum0))
print(end-start)


# #sum of squares
# sumS = 0
# for i in range(1,10+1):
#     sumS += i**2
# print(sumS)
#
# #sqaure of sums:
# ssum = 0
# for x in range(1,10+1):
#     ssum += x
# ssum = ssum **2
# print(ssum)
