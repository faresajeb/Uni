import random
p = 1
n = int(input())
for i in range(1,n+1):
    x = random.randint(1,10)
    print(x, end=" ")
    p = p * x
print(p)