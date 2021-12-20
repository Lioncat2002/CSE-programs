n=int(input())

if n>90:
    print("Senior Status")
elif n>60 and n<=90:
    print("Junior Status")
elif n>30 and n<=60:
    print("Sophomore Status")
else:
    print("Freshman Status")