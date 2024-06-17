# TO DISPLAY EVEN NUMBERS BETWEEN M AND N

m, n = [int(i) for i in input("ENTER MINIMUM AND MAXIMUM RANGE : ").split(',')]

x = m # start from m onwards
if x % 2 != 0:  #if x is not even, start from next number
    x = x+1

while x>=m and x<=n:
    print(x)
    x+=2
