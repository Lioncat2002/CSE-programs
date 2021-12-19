'''
Integration using the simpson method

Simpson's method->https://en.wikipedia.org/wiki/Simpson%27s_rule

'''

def function(x):
    return 3*x**2

a=int(input("Lower limit: "))
b=int(input("Upper limit: "))

print("Solution using Simpson rule: ",((b-a)/6)*(function(a)+4*function((a+b)/2)+function(b)))

n=int(input("Correctness: "))

h=(b-a)/n

s=0
for i in range(1,n):
    s+=function(a+i*h)
sol=(h/2)*(function(a)+function(b))+h*s
print("Solution using Trapezoidal method: ",sol)
    
