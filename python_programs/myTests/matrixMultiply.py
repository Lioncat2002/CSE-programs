'''
matrix multiply
'''
a=eval(input("Enter matrix 1: "))
b=eval(input("Enter matrix 2: "))
s=[]
for i in range(len(a)):
    l=[]
    for j in range(len(b[i])):
        c=0
        for k in range(len(b)):
            c+=a[i][k]*b[k][j]
        l.append(c)
    s.append(l)

   
for i in s:
    print(i)
