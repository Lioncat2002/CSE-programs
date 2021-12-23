'''
Find the simple interest
'''

def si(p,r,t):
    return (p*r*t)/100

p,r,t=[int(i) for i in input("p ,r, t: ").split()]
print(si(p,r,t))