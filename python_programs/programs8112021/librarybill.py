'''
WAP to write a program to find the fine of a book return in a library

if before of on the expected date
No Fine

if books returned on same month
Fine = 15 Rupees × Number of late days

If the book is not returned in the same month 
but in the same year as the expected return date,
 Fine = 500 Rupees × Number of late months

If the book is not returned in the same year, 
the fine is fixed at 10000 Rupees.

Enter the date in dd/mm/yyyy format
'''
expected_date=list(map(int,input("Expected date:").split('/')))
returned_date=list(map(int,input("Returned date:").split('/')))
fine=0
if expected_date[0]<=returned_date[0] and expected_date[1]==returned_date[1] and expected_date[2]==returned_date[2]:
    fine=0
elif expected_date[0]<=returned_date[0] and expected_date[1]==returned_date[1] and expected_date[2]==returned_date[2]:
    fine=15*(returned_date[0]-expected_date[0])

elif expected_date[1]!=returned_date[1] and expected_date[2]==returned_date[2]:
    fine=500*(returned_date[1]-expected_date[1])

elif expected_date[2]!=returned_date[2]:
    fine=10000
print("Fine is:",fine)