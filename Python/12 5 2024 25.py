# RETRIEVING ONLY NEGATIVE NUMBERS FROM A LIST

num = [1, 2, 3, -4, -5, -6, -7, 8, 9]
for i in num :
    if(i>0):
        pass    # WE ARE NOT INTERESTED
    else:
        print(i)    # THIS IS WHAT WE NEED
