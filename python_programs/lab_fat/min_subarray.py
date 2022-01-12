from itertools import combinations    
def combs(lst, n):
    return (c for k in range(1, n+1) for c in combinations(lst, k))

def best_match(lst, target, n=3):
    return min(combs(lst, n), key=lambda c: (abs(target - sum(c)), len(c)))

list1 = [2,3,5,4,1]

print(best_match(list1, 7))   # (3,)