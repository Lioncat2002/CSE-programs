def function(x):
    return x**4-5*x**2+4


def solver(a,b,c=0):
    x1=function(a)
    x2=function(b)
    if(x1==0):
        return a
   
    elif(x1*x2<0):
        
        c=(a+b)/2
        xtmp=function(c)
        if(xtmp<0):
            a=c
        elif(xtmp>0):
            b=c
        
        if(round(function(c),2)==0):
            return c
        else:
            solver(a,b,c)
    
lowerRange=int(input("Lower range: "))
upperRange=int(input("Upper range: "))

print("Solution: ")
print(*filter(lambda x: x!=None,[solver(i,i+1) for i in range(lowerRange,upperRange+1)]))

        


