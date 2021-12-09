a=[]
def column(matrix,index):
    return [int(i[index]) for i in matrix]
for i in range(2):
    a.append(input().split())
for i in range(len(a)):
    s=0
    for j in range(len(a[0])):
        s+=int(a[i][j])
    print(f"Sum of row {i} is {s}")

for i in range(len(a[0])):
    print(f"Sum of column {i} is {sum(column(a,i))}")

