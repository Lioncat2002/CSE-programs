'''
Transfer info from welcome.txt to foo.txt
'''

f=open("welcome.txt")
f1=open("foo.txt",'w+')
f1.write(f.read())
f1.seek(0)
print(f1.read())
f1.close()
f.close()