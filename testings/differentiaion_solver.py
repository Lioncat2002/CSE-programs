import math
def f(x):
    return math.sin(x) * math.cos(x) + math.exp(2*x) + 2*x**4 - 10


def derive(x,h):
    top=f(x+h)-f(x)
    return top/h



correctness=float(input("Correctness: "))
value=float(input("Value of x: "))*0.0175

print(derive(value,correctness))

