'''
WAP to find the average of 3 numbers using function
'''

def avg(a1,a2,a3)->int:
    return (a1+a2+a3)/3

r=avg(
    float(input()),
    float(input()),
    float(input())
)
print(r)