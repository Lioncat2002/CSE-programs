'''
Find the sum of each row and column of matrix of size m x n
'''
a=[]
b=[]
m=int(input("m: "))
n=int(input("n: "))
print("Matrix A:")
for i in range(m):
    a.append(input().split())
print("Matrix B:")
for i in range(m):
    b.append(input().split())
s=[]
for i in range(m):
    l=[]
    for j in range(n):
        l.append(int(a[i][j])+int(b[i][j]))
    s.append(l)
print("Answer:")
for i in s:
    print(*i)
