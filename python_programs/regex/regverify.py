'''
Check if a registration no. is valid
eg: 15bec1032
'''

import re

reg=input()
if re.match("^[0-9]{2}[a-zA-Z]{3}[0-9]{4}$",reg):
    # checks of x indices
    print("Valid")
else:
    print("Invalid")