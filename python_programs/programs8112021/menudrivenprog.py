'''
WAP to menu driven program to find the add, sub,mul,div with 2 inputs
'''
choice=0
while choice!=5:
    choice=int(input("\n\n1. for add \n2. for sub\n3. for mul\n4. for div\n5. to exit\n"))
    l=input("Enter 2 numbers: ").split()
    if choice==5:
        break
    a,b=l
    if choice==1:
        print("Addition:",float(a)+float(b))
    elif choice==2:
        print("Subtraction:",float(a)-float(b))
    elif choice==3:
        print("Multiplication:",float(a)*float(b))
    elif choice==4:
        print("Division:",float(a)/float(b))
    