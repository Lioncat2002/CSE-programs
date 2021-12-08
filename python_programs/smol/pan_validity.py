'''
Check if a pan is valid or not
A pan number is 

<Alphabet><Alphabet><Alphabet><Alphabet><Alphabet><digit><digit><digit><digit><Alphabet>

All alphabets are uppercase in a pan

'''

panno=input()
if len(panno)==10:
    if panno[0:6].isalpha() and panno[0:6].isupper():
        if panno[6:10].isdigit() and panno[-1].isalpha() and panno[-1].isupper():
            print("VALID")
        else:
            print("INVALID")
    else:
        print("INVALID")
else:
    print("INVALID")


