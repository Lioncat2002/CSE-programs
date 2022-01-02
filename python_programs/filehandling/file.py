f=open("foo.txt","w+")
f.writelines(["Hello\n","This is a new line"])
f.flush()
f.seek(0)
print(f.read())
f.close()

