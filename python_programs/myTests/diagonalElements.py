'''
Diagonal elements
'''
l=eval(input("Input Matrix: "))
primary=[]
secondary=[]
for i in range(len(l)):
    for j in range(len(l[i])):
        if i==j:
            primary.append(l[i][j])
        if (i+j)==len(l)-1:
            if i!=(len(l)-1)/2:
                secondary.append(l[i][j])
print("Primary Diagonal:",primary,'\n',"Secondary Diagonal:",secondary)