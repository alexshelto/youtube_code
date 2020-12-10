#Alex Shelton
#Project Euler Problem 2

#------Prompt---------------
#Find the sum of all the even-valued terms in the fibonacci sequence which do not exceed four million.
#Answer = 4613732
          4613732
0,1,1,2,3,5

#fibonacci function:
def fibonacci(n):
    if n==1:
        return 1
    elif n==2:
        return 2
    else:
        return(fibonacci(n-1)+fibonacci(n-2))

sum = 0
iter = 1
while(fibonacci(iter) <= 4000000):
    #if number is even
    if fibonacci(iter) % 2 == 0:
        sum += fibonacci(iter)
    iter += 1

print(sum)
