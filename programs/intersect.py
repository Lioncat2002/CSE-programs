def intersect(seq1:str,seq2:str)->list:
    res=[]
    for i in seq1:
        if i in seq2:
            res.append(i)
    return res

print(intersect("SPAM","SAM"))