'''
Find the sum of digits till you reach a single digit
Moodle
'''
n=int(input())
sum=0
while n or sum>9:
    if n==0:
        n=sum
        sum=0
    d=n%10
    n=n//10
    sum+=d

print(sum)
n=input()
sum=0
while len(str(n))>1:
    for i in n:
        sum= sum + int(i)
    n=str(sum)
    sum=0 #set ze sum to 0 else evil things happen
print(n)
