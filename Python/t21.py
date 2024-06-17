n=int(input("enter value to find the factorial : "))
i=1
sum=0
fact = 1
for i in range(1,n+1):
    fact=fact*i
for i in range(1,n+1):
    sum=sum + fact



print(fact)
print(sum)