file_name=input("Enter filename: ")
f=open(file_name)
r=f.readlines()
d={}
for i in r:
    i=i.split()
    t_price=int(i[1])*int(i[2])
    if t_price>300000:
        d[i[0]]=[i[1],i[2],t_price]
print(d)
