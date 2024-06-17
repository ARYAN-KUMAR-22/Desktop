# TO FIND SUM OF A LIST OF NUMBERS USING WHILE
# ATKE A LIST OF NUMBERS

list = [10, 20, 30, 40, 50]
sum = 0     # INITIALLY SUM IS ZERO
i = 0   # TAKE A VARIABLE

while i < len(list):
    print(list[i])  # DISPLAY THE LEEMENT FROM LIST
    sum += list[i]  # ADD EACH ELEMENT TO SUM
    i+=1
print('Sum = ', sum)
