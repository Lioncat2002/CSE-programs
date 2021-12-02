'''
WAP to input a number and convert it to it's corresponding word
Eg:
Input: 867
Output: Eight Six Seven
'''
mappings={1:'One',2:'Two',3:'Three',4:'Four',5:'Five',6:'Six',7:'Seven',8:'Eight',9:'Nine',0:'Zero'}
wrd=''
num=int(input("Number: "))

while num:
    d=num%10
    num//=10
    wrd=mappings[d]+" "+wrd
print(wrd)