s=input()
w=''
for i in s:
    if i.islower():
        w+=i.upper()
    else:
        w+=i.lower()
print(w)