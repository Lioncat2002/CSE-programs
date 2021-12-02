'''
WAP to check if the given points form a triangle or not
'''
import math
def lineCheck(p1:list,p2:list,p3:list)->bool:
    if p1[0]==p2[0]==p3[0] or p1[1]==p2[1]==p3[1]:
        return False
    return True

def sizeCheck(p1:list,p2:list,p3:list)->bool:
    d1=math.sqrt((p1[0]-p2[0])**2+(p1[1]-p2[1])**2)
    d2=math.sqrt((p2[0]-p3[0])**2+(p2[1]-p3[1])**2)
    d3=math.sqrt((p1[0]-p3[0])**2+(p1[1]-p3[1])**2)
    if d1<d2+d3 or d2<d1+d3 or d3<d1+d2:
        return True
    return False 

l=lineCheck([5,10],[20,10],[15,15])

s=sizeCheck([5,10],[20,10],[15,15])

if l and s:
    print("Valid Triangle")
else:
    print("Invalid")