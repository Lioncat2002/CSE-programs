'''
Selection sort in python
Mine
'''
l=eval(input())

for i in range(0,len(l)-1):
    min_index=i
    for j in range(i+1,len(l)):
        if l[j]<l[min_index]:
            min_index=j
    l[min_index],l[i]=l[i],l[min_index]

print (l)
