'''
Print the factorials upto a limit
eg: 
Input: 5
Output:
1 1
3 6
5 120


Moodle
'''
number=int(input())
if number>=0:
    if number%2!=0:
        index=1
    else:
        index=2
    while index<=number:
        alt=index
        factorial=alt
        while alt>1:
            factorial*=(alt-1)
            alt-=1
        print(index,factorial)
        index+=2
else:
    print("Enter the positive number")