'''
Calculate Bonus marks of a student
moodle
'''
m=float(input())
if m==0:
    print("Enter the appropriate mark")
else:
    c=input()
if m>=80:

    if c=='T':
        print(0.08*m+m)

    elif c=='L':
        print(0.06*m+m)

elif 60<=m and m<80:

    if c=='T':
        print(0.06*m+m)

    elif c=='L':
        print(0.04*m+m)

elif 40<=m and m<60:
    if c=='T':
        print(0.04*m+m)

    elif c=='L':
        print(0.02*m+m)
else:
    print(0)
