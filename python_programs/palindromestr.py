'''
WAP to check if a string is Palindrome
ABBA
ABBA
'''

# string palindrome
print("String palindrome")
s=input()
w=''
for i in range(1,len(s)+1):
    w+=s[-i] #using the reverse indexing
if s==w:
    print("Palindrome")
else:
    print("Not palindrome")

# number palindrome
'''
Check if the input number is a palindrome or not
121 is a palindrome
'''
print("Number palindrome")
n=int(input())
k=n
reverse=0
while n:
    d=n%10
    n=n//10
    reverse=reverse*10+d
if reverse==k:
    print("Palindrome")
else:
    print("Not palindrome")

