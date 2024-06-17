# PROGRAM TO PRINT PRIME NUMBERS UPTO A GIVEN NUMBER
# ACCEPT UPTO WHAT NUMBER THE USER WANTS
max = int(input("Upto what number ?"))

for num in range(2, max+1):     # generate fro 2 onwards till max
    for i in range(2, num):     # i represents numbers fro 2 to num - 1
        if (num % i ) == 0 :    # if num is divisible by i
            break               # then it is not prime, go back and check next number
    else :
        print(num)          # otherwise it is prime the hence display
