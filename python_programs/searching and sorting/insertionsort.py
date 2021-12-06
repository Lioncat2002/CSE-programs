'''
Insertion sort in python
mine
'''

l=eval(input())

for i in range(1,len(l)):
    while l[i-1]>l[i] and i>0:
        l[i],l[i-1]=l[i-1],l[i]
        i-=1
print(l)