import re

n=input()

pattern=re.compile('[a-zA-Z]{4,}')
names=pattern.findall(n)

pattern=re.compile('\d+')
numbers=pattern.findall(n)
d=[(i,j) for i,j in zip(names,numbers)]
d=dict(d)
if numbers:
    print(d)
else:
    print("input empty")