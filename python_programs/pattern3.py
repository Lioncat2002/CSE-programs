'''
*000*000*
0*00*00*0
00*0*0*00
000***000

Utkarsh
'''
l=int(input())
b=int(input())
print("With for\n")
for i in range(1,b+1):
    for j in range(1,l+1):
        if j==(l+1)//2 or j==i or j==(l+1)-i:
            print('*',end='')
        else:
            print('0',end='')
    print()
i=1
j=1
print("\nWith while\n")
while i<=b:
    while j<=l:
        
        if j==(l+1)//2 or j==i or j==(l+1)-i:
            print('*',end='')
        else:
            print('0',end='')
        j+=1
        
    j=1
    print()
    i+=1


