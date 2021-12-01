'''
Consider a 2D list
use it as a database
accept a primary key index
and a primary key value
use that to find the particular answer
'''
db=[]
number_lst=int(input())
length=int(input())
for i in range(number_lst):
    l=input().split()
    for j in range(len(l)):
        if l[j].isdigit():
            l[j]=int(l[j])
    db.append(l)
    l=[]       
  
primary_id=int(input())
primary_id_val=int(input())

for i in db:
    if i[primary_id] == primary_id_val:
        print(i)
        break