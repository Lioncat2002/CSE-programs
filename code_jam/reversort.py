def reversort(l):
    s=0
    for i in range(len(l)-1):
        j=l.index(min(l[i:len(l)]))
        a=list(reversed(l[i:j+1]))
        l[i:j+1]=a
        s+=j-i+1
    return s


t=int(input("Testcase: "))
for i in range(1,t+1):
    n=int(input("Length: "))
    l=[int(j) for j in input("List: ").split()]
    print(f"Case #{i}:",reversort(l))