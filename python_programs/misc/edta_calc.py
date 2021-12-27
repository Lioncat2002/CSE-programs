'''
Find the temporary, total and permanent hardness of water using EDTA method in 50 samples
Formulas obtained from: https://www.mlsu.ac.in/econtents/2193_expriment%206.pdf
Aditya
'''

temp_hardness=0
perm_hardness=0
total_hardness=0
for i in range(50):
    init_water_sample=float(input("Water sample initial value: "))
    final_water_sample=float(input("Water sample final value: "))
    ml_edta=float(input("Ml of unboiled EDTA used: "))
    boiled_edta=float(input("Ml of boiled EDTA used: "))
    total_hardness+=ml_edta*10**3*(init_water_sample-final_water_sample)
    perm_hardness+=boiled_edta*10**3*(init_water_sample-final_water_sample)
    temp_hardness=total_hardness-perm_hardness

    

print("---------Finally-------------")
#Finding the average
print("Total hardness",total_hardness/50)
print("Permanent Hardness",perm_hardness/50)
print("Temporary Hardness",temp_hardness/50)


