# CREATING ONE ARRAY FROM ANOTHER ARRAY

from array import *
arr1 = array('d', [1.5, 2.5, -3.5, 4])

# USE SAME TYPE CODE AND MULTIPLY EACH ELEMENT OF ARR1 WITH 3
arr2 = array(arr1.typecode, (a*3 for a in arr1))
print('The arr2 elements are : ')
for i in arr2:
    print(i)
