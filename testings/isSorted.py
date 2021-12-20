'''
Checks if a list is sorted
'''

def isSorted(a):
    l=len(a)

    if l==0 or l==1:
        return True
    if a[0]>a[1]:
        return False
    b=a[1:]
    issmallerListsorted=isSorted(b)

    return issmallerListsorted
print(isSorted([1,5,3,4,5,6]))