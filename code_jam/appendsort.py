'''
Append sort
'''
def appendsort():
    n=input()
    l=list(map(int,input().split()))
    res=0
    for i in range(1,len(l)):
        cnt=0
        while l[i]<=l[i-1]:
            l[i]*=10
            cnt+=1
        if cnt>1 and l[i]//10 + (10**(cnt-1)-1)>l[i-1]:
            l[i]=l[i-1]+1
            cnt-=1
        res+=cnt
    return res,l


for case in range(int(input())):
    print( appendsort())
