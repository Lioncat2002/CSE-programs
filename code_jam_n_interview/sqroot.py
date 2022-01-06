'''
Find the square root of a number without any function
Using Newton's method: https://en.wikipedia.org/wiki/Newton's_method
'''
n=int(input("Number: "))

def sqroot(n,guess,i=0):
    guess=guess-((guess*guess-n)/(2*guess))

    if i<100:
        return sqroot(n,guess,i+1)
    else:
        return guess

print(sqroot(n,n/2))