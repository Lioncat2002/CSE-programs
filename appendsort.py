'''
def appendsort(l):
    c=0
    nms=['1','2','3','4','5','6','7','8','9']
    for i in range(1, len(l)):
        pass
    return l
      
        s=-1

        while int(l[i])<=int(l[i-1]):
            if s==-1:
                l[i]+='0'
                c+=1
                
            elif s>=len(nms):
                s=-1
                w=list(l[i])
                w[-1]='0'
                l[i]=''.join(w)
                continue
            else:
                w=list(l[i])
                w[-1]=nms[s]
                l[i]=''.join(w)
           
            s+=1
    return c,l

t=int(input())
for i in range(1,t+1):
    n=int(input())
    l=input().split()
    print(f"Case #{i}:",appendsort(l))
'''

def append_sort():
    N = input()
    X = list(map(int, input().strip().split()))

    result = 0
    for i in range(1, len(X)):
        cnt = 0
        while X[i] <= X[i-1]:
            X[i] *= 10
            cnt += 1
        
        if cnt > 1 and (X[i]//10) + (10**(cnt-1)-1) > X[i-1]:
            
            X[i] = X[i-1]+1
            cnt -= 1
        result += cnt
    return result,X

for case in range(int(input())):
    print( append_sort())