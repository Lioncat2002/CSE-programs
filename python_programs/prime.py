'''check if a number is prime or not'''
import math
n=int(input("Enter a number"))
c=0
for i in range(1,int(math.sqrt(n))+1):
    if(n%i==0):
        c+=1

if(c==1):
    print("Prime")
else:
    print("Not prime")