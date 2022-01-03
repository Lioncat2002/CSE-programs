'''
Testing write function
'''
f=open("welcome.txt",'w')
f.write("Hellow world")
f.close()

f=open("welcome.txt",'w')
lines=["a line of text\n","another line of text\n"]
f.writelines(lines)
f.close()

f=open("welcome.txt",'a')
f.write("Hellow world again")
f.close()

