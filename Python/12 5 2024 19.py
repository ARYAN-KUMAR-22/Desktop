# TO DISPLAY STARS IN EQUILATERAL TRIANGULAR FORM

n = 40
for i in range(1, 11):
    print(' '*n, end = ' ')     # REPEAT SPACE FOR N TIMES
    print('* '*(i))             # REPEAT STAR FOR I TIMES
    n -= 1
