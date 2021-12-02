'''
WAP to find the total milk produced
Moodle
'''

n=int(input("Farms number: "))
i=0
s=0
while i<n:
    milk=input("milk (L ml): ").split()
    s+=int(milk[0])*1000+int(milk[1])
    i+=1

print("Total milk:",s//1000,'L',s%1000,'ml')