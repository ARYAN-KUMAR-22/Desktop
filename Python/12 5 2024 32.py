# PROGRAM TO EVALUATE SINE SERIES
# ACCEPT USER INPUT

x, n = [int(i) for i in input("ENTER ANGLE VALUE, NO. OF ITERATIONS : ").split(',')]

# convert the angle from degrees into radians
r = (x*3.14159)/180

# this becomes the first term
t = r

# till now, find the sum
sum = r

#display iteration number and sum
print('Iteration = %d\tSum = %f' % (1, sum))

# denominator for the scond term
i = 2

# repeat for 2nd to nth terms

for j in range(2, n+1):
    t = (-1)*t*r*r/(i*(i+1))    # find the next term
    sum = sum + t;  #add it to sum
    print('Iteration = %d\tSum = %f' % (j, sum))
    i +=2 # increase i value by 2 for denominator for next term
