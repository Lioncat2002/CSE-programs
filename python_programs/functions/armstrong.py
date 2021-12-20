def armstrong(n):
    s=0

    for i in n:
        s+=int(i)**3
    return s==int(n)

n=input("Enter a number: ")

print("Armstrong" if armstrong(n) else "Not Armstrong")