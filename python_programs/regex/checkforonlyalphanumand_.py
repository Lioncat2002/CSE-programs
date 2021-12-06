'''
WAP to check if a string has only a-z A-Z 0-9 and _
'''
import re
n=input()

if re.match("^[a-zA-Z0-9_]*$",n):
    print("Valid")
else:
    print("Invalid")
