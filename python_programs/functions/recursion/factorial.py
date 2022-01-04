def fact(n,f=1):
    if n:
        return fact(n-1,f*n)
    else:
        return f
print(fact(5))
    