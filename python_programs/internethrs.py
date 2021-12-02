'''
Calculate the internet browsing bill
'''
hrs=int(input("Hours Browsed: "))
mins=int(input("Minutes browsed:"))
amount=0
if(hrs>=7):
    print("Only 7 hours max permitted")
elif(hrs>=5):
    amount+=200
    rhrs=hrs-5

    print(amount+rhrs*50+mins)
else:
    print(hrs*50+mins)

    