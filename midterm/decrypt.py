nmappings='abcdefghijklmnopqrstuvwxyz'
mappings='zyxwvutsrqponmlkjihgfedcba'
decrypt=''
encrypted=input()
key=input()

keys=[]
for i in key:
    print(i)
    keys.append(nmappings.index(i.lower()))
keyring=[]
for i in range(len(encrypted)):
    if encrypted[i].isalpha():
        keyring.append(keys[i%len(keys)]+1)
        index=mappings.index(encrypted[i].lower())
   
        decrypt+=mappings[((index+keys[i%len(keys)])%len(mappings))]
    else:
        decrypt+=encrypted[i]

print(keyring,'\n',decrypt)


        
