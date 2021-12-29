'''
Write a Python function named printAsterisks that is passed a positive integer value n, and prints 
out a line of n asterisks. If n is greater than 75, then only 75 asterisks should be displayed.
'''

def printAsterix(n):
    return '*'*(n if n<75 else 75)

print(printAsterix(int(input("Enter number: "))))
