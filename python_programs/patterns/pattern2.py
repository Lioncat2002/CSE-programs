'''
1
212
32123
'''

n= int(input(""))
i= 1
c=0
while i<(n+1):
    w=list(range(i,1,-1))+list(range(1,i+1))
    print("".join([str(i) for i in w]))
    i+=1


