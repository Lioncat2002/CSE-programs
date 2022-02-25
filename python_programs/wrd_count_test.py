import re
from pprint import pprint
s=input().split()
d={}

for i in range(1,len(s)):
        if not re.match('^[a-zA-Z!]*[a-zA-Z!?]$',s[i]):
            print("Invalid")
            break
else:
        for i in s:
            i=i.strip('!')
            i=i.strip('?')
            if i.lower() not in d.keys():
                d[i.lower()]=1
            else:
                d[i.lower()]+=1
        pprint(d) 


  

