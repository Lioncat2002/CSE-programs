'''
Bob loves chocolate, 
he goes to store with USD N
Price of 1 chocolate: USD C
the store has a offer:
    For every M wrapper = 1 chocolate is free
Find the total chocolate Bob can eat
'''


n=float(input("Money: "))
m=float(input("Discount: "))
c=float(input("Cost: "))
chocolates=0
if(n>=c):
    chocolates=n//c
    
    total=chocolates//m+chocolates      
    print(total)
    
        
else:
    print("Insufficient balance")
