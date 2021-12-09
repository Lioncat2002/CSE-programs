a,b,c=input().split()
a=int(a)
b=int(b)
c=int(c)
if a==b==c:
    print("The type of triangle is Equilateral")

if a!=b!=c:
    print("The type of triangle is Scalene")

if a==b or a==c or b==c:
    print("The type of triangle is Isoceles")
