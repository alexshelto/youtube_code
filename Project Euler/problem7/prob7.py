#Alex Shelton
#Project Euler Problem #7

#----------Prompt----------#
# By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
#
# What is the 10,001st prime number?



#prime number: cannot be divisable by anything but 1 and itself

#Steps: walk through a loop of numnbers and check if its prime: if number is prime iterate a counter







import time

def isPrime(n):
    if n < 2: return "Not prime"
    for i in range(2, int(n**0.5) + 1): #range from 2- half of the number: cancels out chance of number being itself 
        if n % i == 0:
            return False
    return True

# returns the nth prime number
def nthPrime(n):
    primeCount = 0
    num = 1

    while primeCount < n:
        num += 1
        if isPrime(num):
            primeCount += 1
    return num


def main():
    start = time.time()
    print("The 10,001st prime number is: {}".format(nthPrime(10001)))
    end = time.time()

    print("Execution time: {}".format(end-start))



if __name__ == '__main__':
    main()