'''
Convert a string to ceaser cipher
Eg:
Input:
Python
Output:
Sbwkrq
i.e. increase the letter by 3
'''
n=input("Enter a message: ")
cipher=''
alphabets='abcdefghijklmnopqrstuvwxyz'
for i in n:
    if i.lower() in alphabets:
        if i.isupper():
            # The next line is used for wrapping around the string
            # i.e. if the index is at the end of the string then it wraps around
            # to the start of the string
            changed_index=(alphabets.index(i.lower())+3)%len(alphabets)
            cipher+=alphabets[changed_index].upper()
        else:
            cipher+=alphabets[(alphabets.index(i)+3)%len(alphabets)]
    else:
        cipher+=i
print("Encrypted message: ",cipher)