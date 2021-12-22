n=int(input("Number: "))
p=int(input("Power: "))
d=int(input("Divisor: "))
cycle=[]
for i in range(1,p+1):
    r=(n**i)%d

    cycle.append(r)

    if cycle[-1]==cycle[0] and len(cycle)>1:
        cycle.pop()
        print("Cycle: ",cycle)
        break


print("Answer: ",cycle[int(p%len(cycle)-1)%len(cycle)])
