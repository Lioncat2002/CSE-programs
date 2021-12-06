'''
University has released all the list of failures in
physics, chem, maths, cse
print all the failures and avoid the duplicates
'''

phy=eval(input())
chem=eval(input())
maths=eval(input())
computer=eval(input())
failures=set(phy+chem+maths+computer)
print(failures)