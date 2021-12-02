'''
Write a Python program  print every second character(Even) from a string.
'''

string=input()
final=''
for i in range(1,len(string),2):
   final+=string[i]
print(final)