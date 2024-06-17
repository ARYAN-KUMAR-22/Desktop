# SEARCHING FOR AN ELEMENT IN LIST

group1 = [1, 2, 3, 4, 5]    # TAKE A LIST OF ELEMENTS

search = int(input('ENTER ELLEMENT TO SEARCH : '))

for element in group1:
    if search == element:
        print('ELEMENT FOUND IN GROUP1')
        break   # COME OUT OF FOR LOOP
else :
    print('ELEMENT NOT FOUND IN GROUP1')    # this is else suite
