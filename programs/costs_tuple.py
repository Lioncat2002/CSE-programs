'''
 Draw a flowchart and construct a python program which accepts the items of  
 tuples containing the category as the first entry and different components of the category along
  with their costs as the following entries.
  The job is to create a tuple which summarizes the costs for each category.
'''
n_tup=int(input())
result=[]
for i in range(n_tup):
    num=int(input())
    sum=0
    items=[]
# © KITTYCAT
    for j in range(num):
        item=input()
        items.append(item)
        if item.isdigit():
            sum+=int(item)
    result.append((items[0],sum))

print(tuple(result))