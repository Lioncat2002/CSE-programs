'''
Print the fibonacci series
'''

def fibonacci(a,b,n=0):
    if(n==10):
        
        return
    c=a+b
    a=b
    b=c
    n+=1
    print(c,end=' ')
    fibonacci(a,b,n)

    
print(1,1,end=' ')
fibonacci(1,1)
