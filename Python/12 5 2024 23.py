# USING CONTINUE TO EXECUTE NEXT ITERATION OF WHILE LOOP

x = 0
while x < 10:
    x+=1
    if x>5:     # IF X > 5 THEN CONTINUE NEXT ITERATION
        continue
    print ( 'x = ', x)
print("Out of loop")
