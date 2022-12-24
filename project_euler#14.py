def chainlength(n):
    counter = 1
    while(n!=1):
        if (n%2 == 0):
            n/=2
            counter+=1
        else:
            n = 3*n+1
            counter+=1
    return counter

highest = 0
num = 0
for i in range(1,1000000):
    current = chainlength(i)
    if(current>highest):
        highest = current
        num = i

print(num)