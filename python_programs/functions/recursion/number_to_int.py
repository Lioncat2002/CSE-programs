'''
Convert a number string to int via recursion
like 00001234000 will become 1234000

Utkarsh
'''

def f(n):
    if len(n)==1:
        return n
    elif n[0]!='0' and n[0].isdigit():
        return n
    
    elif n[0]=='0':
        return f(n[1:])
    
print(f('0001234000'))