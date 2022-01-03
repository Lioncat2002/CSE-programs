'''
1. Create a file with 10 lines of text
2. print 5th and 6th lines of that file
3. Print no. of lines on that file
4. No. of spaces in that file
5. No. words in the file
6. No. of words which are starting with an alphabet s or w
'''
import re
# Region 1
'''
Create a file with 10 lines of text
'''
f=open("file1.txt",'w')
lines=[
    "Hello I am Kittycat\n",
    "I am a python programmer\n",
    "I also know C, C#, Go, Javascript\n",
    "I also work as a freelancer\n",
    "Several of my works are showcased at:\n",
    "Portfolio: https://lioncat2002.github.io/ \n",
    "Github: https://github.com/Lioncat2002 \n",
    "I also like reading books\n",
    "Lost world from Arthur Conan Doyle\n",
    "is one of my favorite books\n"
]
f.writelines(lines)
f.close()
#end region

#region 2
'''
Print the 5th and 6th line of the text
'''
f=open("file1.txt")
r=f.readlines()
print(r[4])
print(r[5])
f.close()
#endregion

#region 3
'''
Print the number of lines present 
'''
f=open("file1.txt")
r=f.readlines()
print("Number of lines: ",len(r))
f.close()
#endregion

#reion 4
'''
Print the number of white spaces present
'''

f=open("file1.txt")
r=f.read()
print("Whitespaces:",len(re.findall(' ',r)))
f.close()
#endregion

#region 5
'''
Print the number of words present
'''
f=open("file1.txt")
r=f.read().split()
print("Number of words:: ",len(r))
f.close()
#endregion

#region 6
f=open("file1.txt")
r=f.read()
print("Number of words starting with s or w: ",len(re.findall(r'\b[sSwW]\w+',r)))
f.close()
#endregion