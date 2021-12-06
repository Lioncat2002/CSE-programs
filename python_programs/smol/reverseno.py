'''
Accept a number and reverse it
account for leading zeros
'''
n=int(input("No.: "))
n=str(n)
w=''
'''
Using the opposite indexing
i.e. if s=   '2   3   4'
then indices= -3 -2  -1
'''

for i in range(1,len(n)+1):
    w+=n[-i]
n=''

print(int(w))

    


