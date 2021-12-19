'''
take a input limit
and display the numbers upto that limit in a matrix
'''
import math
n=int(input("Limit: "))

c=0
result=[]
for i in range(int(math.sqrt(n))):
    l=[]
    for j in range(int(math.sqrt(n))):
        c+=1
        l.append(format(1/c,'.3f'))
    result.append(l)

for i in result:
    print(*i)
