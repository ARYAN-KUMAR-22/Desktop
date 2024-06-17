# ACCESSING ELEMENTS OF AN ARRAY USING INDEX

from array import *
x = array('i', [10, 20, 30, 40, 50])

# FIND NUMBER OF ELEMENTS IN THE ARRAY
n = len(x)

# DISPLAY ARRAY ELEMENTS USING INDEXING
for i in range(n) : # REPEAT FROM 0 TO n-1
    print(x[i], end= ' ')
