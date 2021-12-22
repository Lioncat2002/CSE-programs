def f():
    x=20
    y=50
    def f2():
        x=y+20
        return x
    print(f2())
    return x
print(f())
    