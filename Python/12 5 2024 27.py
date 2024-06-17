# TO HANDLE ASSERTION_ERROR RAISED BY ASSERT
x = int(input('ENTER A NUMBER GREATER THAN 0 : '))
try :
    assert(x>0)     # EXCEPTION MAY OCCUR HERE
    print('U entered : ', x)
except AssertionError :
    print("Wrong input entered")    # THIS IS IN CASE OF EXCEPTION
