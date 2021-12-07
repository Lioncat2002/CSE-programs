'''
let us say a teacher decided to give grades to her students as follows:
a) Mark greater than or equal to 80 Excellent
b) Mark greater than or equal to 65 but less than 80 Good
c) Mark greater than or equal to 50 but less than 65 Pass
d) Mark less than 50 Fail
Write a program in python to print a grade according to a student's mark with
multiple if statements
'''
marks=float(input("marks: "))

if marks>=80:
    print("Excellent")
elif 65<=marks<80:
    print("Good")
elif 50<=marks<65:
    print("Pass")
else:
    print("Fail")