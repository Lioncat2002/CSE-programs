'''
Write a Python program to separate and print the numbers of a given string.
'''
import re

n=input()

n=n.split()

for i in n:
    if re.match('^[0-9]*$',i):
        print(i)