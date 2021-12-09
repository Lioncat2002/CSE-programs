n=input().split()
m=int(input())
n=n[m:]+n[:m]
print(' '.join(n))