''' creating an array :
        array_name = array( type code, [elements])

    typecode     c type            minimum size in bytes
    'b'          signed integer    1
    'B'          unsigned integer  1
    'i'          signed integer    2
    'I'          unsigned integer  2
    'l'          signed integer    4
    'L'          unsigned integer  4
    'f'          floating point    4
    'd'          double precision  8
                 floating point
    'u'          unicode character 2
'''

# CREATING AN ARRAY

import array
a = array.array('i', [5, 6, -7, 8])

print('The array elements are : ')
for element in a:
    print(element)
