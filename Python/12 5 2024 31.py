# PROGRAM TO DISPLAY FIBONACCI SERIES
n = int(input('How many Fibonaccis ? '))
f1 = 0  # THIS IS FIRST FIBONACI NO.
f2 = 1 # THIS IS SECOND ONE
c = 2 # COUNTS THE NO OF FIBONACCIS

if n == 1 :
    print(f1)
elif n == 2:
    print(f1, '\n', f2, sep = ' ')
else:
    print(f1, '\n', f2, sep = ' ')
    while c<n:
        f = f1 + f2 # add two fibonaccis to get the new one
        print(f)
        f1, f2 = f2, f # this is same as f1 = f2, f2 = f
        c += 1 # increament counter
