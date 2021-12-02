'''WAP to find the largest of 3 numbers'''

s1=int(input("1st number: "))
s2=int(input("2nd number: "))
s3=int(input("3rd number: "))

if s2<s1>s3:
    print("largest:",s1)

elif s1<s2>s3:
    print("largest:",s2)

elif s1<s3>s2:
    print("largest:",s3)
else:
    print("All are equal")