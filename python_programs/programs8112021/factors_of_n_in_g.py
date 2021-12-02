'''
WAP to take a group of numbers (g) and find the factors of n in them(n is another input)
'''
g=eval(input("List of 5 numbers: "))
n=float(input("Number: "))
for i in g:
    if n%i==0:
        print(i)

