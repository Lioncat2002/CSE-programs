'''
if a equation is 4+(3+2)*5
the RPN will be: 432+5*+

so take the input in RPN
and output the correct result
© Kittycat
'''

def EqunToRPN(s:str)->list:
    priorities={'+':1,'-':1,'*':2,'/':2,"(": -1, ")": 0}
    operators = []
    ops = ["+", "-", "*", "/", "(", ")"]
    result = []
    for i in s:
        if i in ops:
            if i == "(":
                operators.append(i)
            else:
                while operators and (priorities[operators[-1]] >= priorities[i]):
                    a=operators.pop()
                    result.append(a) 
                
                if i == ')':
                    operators.pop()
                else:
                    operators.append(i)
        else: #incase of numbers
            result.append(i)

    while operators:
        result.append(operators.pop())

    return result



rpn=input("Enter the equation: ")
rpn=EqunToRPN(rpn)
stack=[]

for i in rpn:
    if i.isdigit():
        stack.append(float(i))
    elif i=='+':
        stack[len(stack)-2]+=stack[len(stack)-1]
        stack.pop(len(stack)-1)

#© Kittycat

    elif i=='-':
        stack[len(stack)-2]-=stack[len(stack)-1]
        stack.pop(len(stack)-1)
    elif i=='*':
        stack[len(stack)-2]*=stack[len(stack)-1]
        stack.pop(len(stack)-1)
    elif i=='/':
        stack[len(stack)-2]/=stack[len(stack)-1]
        stack.pop(len(stack)-1)
print("Output:",stack[0])