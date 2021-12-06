'''
Hospital has a set of lab reports(stored in tuple)
Accept the test name and patient's report values
and check if they are inbetween the normal range or not
'''
test_names=("Test1","Test2","Test3","Test4","Test5")
min_vals=(20,35.5,12,120,80)
max_vals=(30,40,15,150,120)

test=input("Enter Test made: ")
val=float(input("Enter value: "))

i=test_names.index(test)
if min_vals[i]<val<max_vals[i]:
    print("Normal")
else:
    print("Not normal")