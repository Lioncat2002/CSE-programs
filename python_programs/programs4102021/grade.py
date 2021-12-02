'''WAP to calculate grade of a student
if avg >= 90 -> A+ grade
if 80<= avg <90 ->A grade
if 70<= avg <80 -> B grade
if 60<= avg <70 -> C grade
if 60<avg -> Fail
'''

s1=float(input("1st subject: "))
s2=float(input("2nd subject: "))
s3=float(input("3rd subject: "))
avg=(s1+s2+s3);
avg=(avg/300)*100
if avg>=90:
    print("A+ grade")
elif 80<=avg<90:
    print("A grade")
elif 70<=avg<80:
    print("B grade")
elif 60<=avg<70:
    print("C grade")
else:
    print("Fail")
