def function(x):
    #return x**4-3*x**3-10*x**2+24*x
    #return x**3-x**2-12*x
    #return x**2-x-12
    #return x**2+x-6
    #return x**4+2*x**3+11*x**2+10*x+24
    return x**3-x-1


def solver(a,b,c=0):
    print(c)
    x1=function(a)
    x2=function(b)
    if(x1==0):
        print(a)
        return a
    elif(x1*x2<0):
        
        c=(a+b)/2
        xtmp=function(c)
        if(xtmp<0):
            a=c
        elif(xtmp>0):
            b=c
        
        if(round(function(c),2)==0):
            #print(c,"<-This works!")
            return c
        else:
            return solver(a,b,c)
    
lowerRange=int(input("Lower range: "))
upperRange=int(input("Upper range: "))

print("Solution: ")
print(*filter(lambda x: x!=None,[solver(i,i+1) for i in range(lowerRange,upperRange+1)]),"<-But this does not?")
#print([solver(i,i+1) for i in range(lowerRange,upperRange+1)],"<-Why are all the values None?")
        


