'''
Check if z is present in a string
'''
import re
n=input()
n=n.split()

for i in n:
    if re.search("[zZ]",i):
        print(i)