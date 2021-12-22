'''
Write all possible function prottypes to compute the area of a circle
'''

# without argument

def f1():
    r=int(input("Radius: "))
    print(3.14*r*r)
f1()
# with argument and return

def f1(r):
    return 3.14*r*r

print(f1(int(input("Radius: "))))

# with argument and print
def f2(r):
    print(3.14*r*r)

f2(int(input("Radius: ")))

#with argument and return
def f1():
    r=int(input("Radius: "))
    return 3.14*r*r
print(f1())