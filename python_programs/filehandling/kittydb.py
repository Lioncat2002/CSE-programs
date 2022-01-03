'''
write a py prog to implement the following:
1. create a file by name employee.txt
2. write the data in following:
emp no. ,emp name ,designation ,emp address ,department, salary ,experiance
3. display the employee name having salary >50000
4. display the employees under one department ()
5. display the employee having min 3 yrs experiance and >35000 salary
'''
from pathlib import Path

#region 1
my_file = Path("employee.txt")
if not my_file.is_file():
    f=open("employee.txt",'x')
    f.close()

f=open("employee.txt",'a')
data=input("db> ")
data=data.split(',')
data=f'{data[0]},{data[1]},{data[2]},{data[3]},{data[4]},{data[5]},{data[6]}\n'
f.writelines(data)
print("data inserted sucessfully!")
f.close()
#endregion

#region 2
f=open("employee.txt")
r=[]
for i in f.readlines():
    r.append(i.split(','))
print("---------EMPLOYEES WITH >50000 SALARY-----------")
for i in r:
    if float(i[5])>50000:
        print(i[1])
f.close()
#endregion

#region 3
f=open("employee.txt")
r=[]
d={}
for i in f.readlines():
    r.append(i.split(','))
print("---------EMPLOYEES IN SAME DEPARTMENT-----------")
for i in r:
    d[i[4]]=[]
for i in r:
    d[i[4]].append(i[1])

for i,j in zip(d.keys(),d.values()):
    w=','.join(j)
    print(f'{i:<20}:{w:<20}')

f.close()
#endregion

#region 4
f=open("employee.txt")
r=[]
for i in f.readlines():
    r.append(i.split(','))
print("---------EMPLOYEES WITH >35000 SALARY and MIN. 3 YRS EXP.-----------")
for i in r:
    if float(i[5])>35000 and float(i[6])>=3:
        print(i[1])
f.close()
#endregion