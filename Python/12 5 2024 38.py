# ACCESSING ELEMENTS OF AN ARRAY USING INDEX

from array import *
x = array('i', [10, 20, 30, 40, 50])

# FIND NUMBER OF ELEMENTS IN THE ARRAY
n = len(x)

# DISPLAY ARRAY ELEMENTS USING INDEXING
i = 0
while i<n:
    print(x[i], end = ' ')
    i+=1
