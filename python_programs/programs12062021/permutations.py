'''
write a python program to print all permutations of a given string or number
'''
n=input("Words: ")
n=list(n)
import itertools
l=list(itertools.permutations(iterable=n))
l=[''.join(i) for i in l]
print(*l)
