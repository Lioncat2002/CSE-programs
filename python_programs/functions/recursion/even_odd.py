'''
Print the sum of all even and odd numbers upto n
'''

def even_odd(n,el=[],ol=[]):
    e=n if n%2==0 else 0
    el.append(e)
    o=n if n%2!=0 else 0
    ol.append(o)
    if not n:
        return sum(el),sum(ol)
    else:
        return even_odd(n-1,el,ol)

print(even_odd(10))
    