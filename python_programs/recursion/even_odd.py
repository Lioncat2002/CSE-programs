def even_odd(el,ol,n):
    e=n if n%2==0 else 0
    el.append(e)
    o=n if n%2!=0 else 0
    ol.append(o)
    if not n:
        return sum(el),sum(ol)
    else:
        return even_odd(el,ol,n-1)

print(even_odd([],[],10))
    