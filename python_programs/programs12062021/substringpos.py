'''
Write a Python program to find the occurrence and position of the substrings 
within a string.

'''
import re

sub=input()
n=input()

for i in re.finditer(pattern=sub,string=n):
    print(i.start(),n[i.start():i.end()])