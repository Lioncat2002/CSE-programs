'''
1,1,2,5...upto 10 numbers

'''
a=1
b=1
print(a,b,sep=',',end=',')
c=0
for i in range(0,8):
   
    c=a+b
    a,b=b,c
    print(c,end=',')