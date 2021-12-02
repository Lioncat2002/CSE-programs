'''
#
##
###
####
#####
######

'''

n=int(input("Enter height:"))
i=1
#with while
print("With while loop")
while i<=n:
    print('#'*i)
    i+=1
#with for
print("With for loop")
for i in range(1,n+1):
    print('#'*i)
