'''
Convert a string to ceaser cipher
Eg:
Input:
Python
Output:
Sbwkrq
i.e. increase the letter by 3
'''
n=input()
cipher=''
L_alphabets='abcdefghijklmnopqrstuvwxyz'
for i in n:
    if i.lower() in L_alphabets:
        if i.isupper():
            # The next line is used for wrapping around the string
            # i.e. if the index is at the end of the string then it wraps around
            # to the start of the string
            changed_index=(L_alphabets.index(i.lower())+3)%len(L_alphabets)
            cipher+=L_alphabets[changed_index].upper()
        else:
            cipher+=L_alphabets[(L_alphabets.index(i)+3)%len(L_alphabets)]
    else:
        cipher+=i
print(cipher)