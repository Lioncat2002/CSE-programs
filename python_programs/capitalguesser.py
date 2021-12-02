'''
WAP to write a program to print the capital after Inputing the country name
'''


d={'India':'Delhi',"Nepal":"Kathmandu","USA":"Washinton DC"}
c=input("Country: ")

if c in d.keys():
    print(d[c])
else:
    print("Error Country not found!")