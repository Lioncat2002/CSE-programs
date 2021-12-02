'''
1 2 3 4 5
11 12 13 14 15
21 22 23 24 25
16 17 18 19 20
6 7 8 9 10

Utkarsh
'''
import math
n=int(input())

for i in range(0,n):
    for j in range(0,n):
        if i< int(math.ceil(n/2)):
            #pass
            print((j+1)+10*i,end=' ')
        elif i== int(math.ceil(n/2)):
            #pass
            print((j+1)+(10*(i-1))-n,end=' ')
        else:
            print((j+1)+10*(n-i)-n,end=' ')
    print()
