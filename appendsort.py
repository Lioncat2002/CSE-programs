
def appendsort(l):
    c=0
    nms=['1','2','3','4','5','6','7','8','9']
    for i in range(1, len(l)):
        s=-1
        while int(l[i])<=int(l[i-1]):
            if s==-1:
                l[i]+='0'
                c+=1
                
            elif s>=len(nms):
                s=-1
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