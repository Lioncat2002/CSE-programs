'''
WAP to insert text in between 3rd line
'''

f=open("foo.txt",'r')
r=f.readlines()
f.close()
line=input("Enter a line: ")
r=r[:2]+[f"{line}\n",]+r[2:]
f=open("foo.txt",'w')
f.writelines(r)
f.close()