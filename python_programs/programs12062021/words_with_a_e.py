'''
Write a Python program to find all words starting with 'a' or 'e' in a given string.
'''
import re
n=input()

n=n.split()

for i in n:
    if re.match('^[aeAE]',i):
        print(i)