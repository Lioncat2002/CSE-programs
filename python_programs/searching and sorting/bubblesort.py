'''
Bubble sort in python
mine
'''

n=eval(input())
#
for i in range(0,len(n)-1):
    for j in range(1,len(n)):
        if n[j-1]>n[j]:
            n[j-1],n[j]=n[j],n[j-1]
print(n)
