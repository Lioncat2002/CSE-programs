'''
Implement a Python function that is passed a list of numeric values and a particular threshold value, and 
returns the list with all values above the given threshold value set to 0. The list should be altered as a side 
effect to the function call, and not by function return value. 
'''

l=[1,2,3,4,5,6]
threshold=int(input("Threshold: "))
def threshold_checker(n):
    global l
    l=[i if i<=n else 0 for i in l]
print("Before: ",l)
threshold_checker(3)
print("After: ",l)