'''
An university is setting up a lab
Find cost of setting up the lab

cost of computer: cost of 1 computer*number of computers
cost of furniture: no.of table*cost of 1 table+ no. of chairs*cost of 1 chair
labour cost=total hours worked + wages
'''

comcost=float(input("Enter Computer Cost"))
ncom=int(input("No. of computers"))
tcost=float(input("Table cost"))
tno=int(input("No. of table"))
ccost=float(input("Chair cost"))
cno=int(input("No of chair"))
lhr=float(input("Hours"))
wages=float(input("Wages"))

totalcost=comcost*ncom+tcost*tno+ccost*cno+lhr*wages
c=print(totalcost)

