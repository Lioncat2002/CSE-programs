'''
WAP to find the words with 'tion' in a list of strings
'''
l=['tuition','lion','kittycat','Notion','substitution']
s=[]
for i in l:
    if 'tion' in i:
        s.append(i)
print(s)