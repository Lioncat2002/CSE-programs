from operator import indexOf


close_backets=["]","}",")"]
open_backets=["[","{","("]
b="])"
stack=[];

for i in b:
    if len(stack)>0 and i in close_backets:
        last_pos=stack[-1]
        print(last_pos)
        if close_backets[open_backets.index(last_pos)]==i:
            print(stack)
            stack.pop()
        else:
            break
    elif i in open_backets:
        stack.append(i)
    elif len(stack)==0 and i in close_backets:
        print("Unbalanced")
print(stack)

if len(stack)==0:
    print("Balanced")
else:
    print("UnBalanced")