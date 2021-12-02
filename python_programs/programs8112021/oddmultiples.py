'''
WAP to print some odd multiples of a odd number
'''
n=int(input("Enter an odd number "))
for i in range(n+1,(n+101)):
    #NOTE: Since upto what number I need to find is not mentioned
    # I am checking for the next 100 numbers
    if i%2!=0 and i%n==0:
        print(i)
