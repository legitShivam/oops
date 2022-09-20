# Largest prime factor

# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143 ?

def largestPrimeFactor(n):
    i = 2
    while i**2 < n:
        while (n % i == 0):
            n /= i
        i+=1
    return n

print(largestPrimeFactor(600851475143))