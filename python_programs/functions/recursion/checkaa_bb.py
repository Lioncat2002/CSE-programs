'''
Check if a sentence starts with a
has nothing or another a
or bb

Utkarsh
'''
def check(string):
    if len(string)==0:
        return True
    elif len(string)==1:
        if string[0]=='a':
            return True
    elif string[0]=='b':
        if string[1]=='b':
            return check(string[2:])
    elif string[0]=='a':
        return check(string[1:])
    return False

print(check("bb"))
