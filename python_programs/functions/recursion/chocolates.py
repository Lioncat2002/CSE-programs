'''
There are m chocolates of type 1 and n chocolates of type 2
How much of each chocolates can Anurag take so that they are equal
'''
def chocolates(m,n,t1=0,t2=0):
    if n==0:
            return t2
    elif m==0:
            return t1
    else:
        return chocolates(m-1,n-1,t1,t2)

print(chocolates(20,10,20,10))



