'''
Write a python program to print sum of odd and even numbers in the range of any two positive integers.
'''
start=int(input())
end=int(input())
oddsum=0
evensum=0
for i in range(start,end+1):
    if i%2!=0:
        oddsum+=i
    else:
        evensum+=i
print("Oddsum:",oddsum)
print("Evensum:",evensum)
