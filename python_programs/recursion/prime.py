'''
WAP to find all the prime numbers from 1 to n using recursion
'''
def prime(l,n):
    c=0
    for i in range(1,n//2+1):
        if n%i==0:
            c+=1
    if c==1:
        l.append(n)
    if n:
        return prime(l,n-1)
    else:
        return sorted(l)
    
        

print(*prime([],100))



