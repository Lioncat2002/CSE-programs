'''
Transpose of a matrix
'''
l=eval(input("Input Matrix: "))
s=[]
for i in range(len(l[0])):
    a=[]
    for j in range(len(l)):
        a.append(l[j][i])
    s.append(a)

for i in s:
    print(i)