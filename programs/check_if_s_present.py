'''
Check if s is present in the string
but not in the start or end
'''
import re
n=input()
n=n.split()

for i in n:
    if re.match("^[^s].*[sS].*[^s]$",i):
        print(i)
    