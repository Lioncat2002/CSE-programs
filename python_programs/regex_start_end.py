'''
WAP to check if a string starts with a and ends with alphabet in between 'b-s'
Check for both Upper and lower case
'''
import re
n=input()

if re.match("^[aA].*[b-sB-S]$",n):
    print("Match")
else:
    print("Not match")