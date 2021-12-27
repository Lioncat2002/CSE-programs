'''
Write a program to implement the menu driven program for the arithmetic operations using functions
'''

def _sum(a,b):
    return a+b
def sub(a,b):
    return a-b
def mul(a,b):
    return a*b
def div(a,b):
    return a/b


n=1
while n:
    n=int(input("\n\n1. For sum \n2. For subtraction \n3. For multiplication \n4. For division\n0. For exit\n\n"))
    if n:
        a=float(input("Enter a: "))
        b=float(input("Enter b: "))
    if n==1:
        f=_sum
    if n==2:
        f=sub
    if n==3:
        f=mul
    if n==4:
        f=div
    print("\n\nResult:",f(a,b))