'''
WAP to find the armstrong number
'''
n=int(input("Number: "))
k=n
arms=0
while n:
    d=n%10
    n//=10
    arms+=d*d*d
if arms==k:
    print("Armstrong number")
else:
    print("Not Armstrong number")