'''
4444444
4333334
4322234
4321234
4322234
4333334
4444444

Utkarsh
'''
n=int(input())

for i in range(1,n+1):
    for j in range(1,n+1):
        min=i if i<j else j
        print(n-min+1,end=' ')
    for j in range(n-1,0,-1):
        min=i if i<j else j
        print(n-min+1,end=' ')
    print()
for i in range(n-1,0,-1):
    for j in range(1,n+1):
        min=i if i<j else j
        print(n-min+1,end=' ')
    for j in range(n-1,0,-1):
        min=i if i<j else j
        print(n-min+1,end=' ')
    print()
