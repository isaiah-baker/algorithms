# Fibonacci algorithm that runs in polynomial time
n = input("Enter N: ")
intN = int(n)


def fib(n):
    if(n==0):
        return 0
    f = []
    f.append(0)
    f.append(1)
    for i in range(2,n+1):
        l = f[i-1] + f[i-2]        
        f.append(l)
    return f

f = fib(intN)

# This prints each index and it's corresponding fibonacci number
# for i in range(len(f)):
    # print(str(i) + " : " + str(f[i]))


print("fibonacci at n = " + str(intN) + " is " + str(f[intN]))