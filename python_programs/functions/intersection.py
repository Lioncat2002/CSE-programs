def intersect(seq1,seq2):
    res=[]

    for i in seq1:
        if i in seq2:
            res.append(i)
    
    return res

print(intersect([1,2,3,4],(1,2)))