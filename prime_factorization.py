
'''
WAP to print the prime factor tree
        150
         / \\
        /   \\
       /    2
      75
       / \\
      /   \\
     /    3
    25
     / \\
    /   \\
   /    5
 5

 Kittycat, Ace, Megarev
'''
import math

def prime_no(n):
    if n<2:
        return False
    if n%2==0:
        return n==2
    c=0
    for i in range(1,int(math.sqrt(n))+1):#1st fourier transform
        if n%i==0:
            c+=1
            
    return c==1

def prime(n):
    prime_list=[2]
    for i in range(1,n+1,2):
        if prime_no(i):
            prime_list.append(i)     
    return prime_list
print(prime(150))
n=int(input("Enter the number: "))
pair=[(0,n)]

def prime_tree(n):
    prime_list=prime(n)
    global pair
    for i in prime_list:
        if n%i==0:
            pair.append((i,n//i))
            if n//i not in prime_list:
                return prime_tree(n//i)
            else:
                
                return pair
prime_tree(n)
print(pair)
c=len(pair)
for i in range(len(pair)):
    c-=1
    if i<=len(pair)-2:
        print('  '*c,' '+str(pair[i][1]))
        print('  '*c,'  /','\\')
        print('  '*c,' /','  \\')
        print('  '*c,'/   ',pair[i+1][0])
      
    else:
        print(' '*c,pair[i][1])

