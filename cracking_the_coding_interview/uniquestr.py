s="abcda"
def test(s):
    for i in range(len(s)-1):
        for j in range(i+1,len(s)):
            if s[i]==s[j]:
                return False
    return True

p=test(s)
print(p)