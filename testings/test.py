import random
def appendsort(arr,si=0):
    global count
    if si==len(arr)-1 :
        return arr
    else:
        if int(arr[si])<int(arr[si+1]):
            return appendsort(arr,si+1)
        else:
            num=arr[si]
            dig=int(num[-1])
            if dig==9:
                 while int(arr[si])>=int(arr[si+1]):
                        print("loop 1")
                        arr[si+1]=arr[si+1]+"0"
                        count=count+1
            else:
                while int(arr[si])>=int(arr[si+1]):
                    print(arr[si+1])

                    arr[si+1]=arr[si+1]+str(random.randint(dig+1,9))
                    count=count+1
            return appendsort(arr,si+1)





count=0
arr=["8","8","8"]
print(appendsort(arr))
print(count)