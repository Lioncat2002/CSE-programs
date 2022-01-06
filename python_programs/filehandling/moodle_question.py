f=open("file2.txt",'w')
n=input()*2
f.write(n)
f.close()
f=open("file2.txt")
print(f.read())
f.close()