'''
Write a program that asks the user to enter a year. The program should decide
if the year is a leap year or not and print out the decision to the user (i.e. display
either “That is a leap year”, or “That is not a leap year”).
'''

year=int(input("Year: "))
def leapcheck(year:int)->bool:
    if year%100==0:
        if year%400!=0:
            return False
    else:
        if year%4!=0:
            return False
    return True

if __name__=='__main__':
    print("Leap Year" if leapcheck(year) else "Not leap year")


    