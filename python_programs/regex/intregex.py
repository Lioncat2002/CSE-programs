'''
WAP to check if a string is int or not with regex
'''
import re
n=input()

if re.match("[+-]?[1-9]\d*$",n):
    print("Integer")
else:
    print("Not an integer")