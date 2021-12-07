'''
   1
  1 2
 1 2 3
'''
n=int(input())
c=0
for i in range(n,0,-1):
    for j in range(i,0,-1):
        print(" ",end='')
    c+=1
    for k in range(1,c+1):
        print("%d "%k,end='')
    print()