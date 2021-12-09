nmappings='abcdefghijklmnopqrstuvwxyz'
mappings='zyxwvutsrqponmlkjihgfedcba'
decrypt=''
encrypted=input()
key=input()

keys=[]
for i in key:
    keys.append(nmappings.index(i.lower()))
keyring=[]
for i in range(len(encrypted)):
    keyring.append(keys[i%len(keys)]+1)
    index=mappings.index(encrypted[i].lower())
    if encrypted[i].islower():
        decrypt+=mappings[((index+keys[i%len(keys)])%len(mappings))].upper()
    elif not encrypted[i].islower():
        decrypt+=mappings[((index+keys[i%len(keys)])%len(mappings))]
    else:
        decrypt+=encrypted[i]

print(keyring,'\n',decrypt)


        
