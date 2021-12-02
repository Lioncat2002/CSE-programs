'''
A farmer is travelling with a Fox(F), Goose(G), Corn(C)
They need to cross from East to West of a River
and farmer's boat can hold only Farmer and one of the items

F and G cannot be together since F will eat G
Same for G and C

WAP to accept a list with the solution to the puzzle and check if it works
Correct solution:
[G,C,G,F,G]
'''
l=list(input("Enter solution "))

east=['F','G','C']
west=[]
from_dir='east'
to_dir='west'

for item in l:
    if from_dir=='east':
        if item in east:
            east.remove(item)
            west.append(item)
        if 'C' in east and 'G' in east:
            print("You lose",east,west)
            break
        elif 'C'  in west and 'G' in west:
            print("You lose",east,west)
            break
        elif 'G' in east and 'F' in east:
            print("You lose",east,west)
            break
        elif 'G' in west and 'F' in west:
            print("You lose",east,west)
            break
        
        from_dir,to_dir=to_dir,from_dir
    elif from_dir=='west':
        
        if item in west:
            west.remove(item)
            east.append(item)
        if 'C' in east and 'G' in east:
            print("You lose",east,west)
            break
        elif 'C'  in west and 'G' in west:
            print("You lose",east,west)
            break
        elif 'G' in east and 'F' in east:
            print("You lose",east,west)
            break
        elif 'G' in west and 'F' in west:
            print("You lose",east,west)
            break
        from_dir,to_dir=to_dir,from_dir
else:
    print("You Win")