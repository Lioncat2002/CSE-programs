'''
WAP to print the Roman numerals of a input number
'''
num=int(input())

mappings=((90,'XC'),(50,'L'),(40,'XL'),(10,'X'),(5,'V'),(4,'IV'),(1,'I'))

roman=""
while num:
    for n,r in mappings:
        if num>=n:
            roman+=r
            num-=n

print(roman)