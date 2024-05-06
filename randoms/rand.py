import random
n = 0
while True:
    num = random.randint(1,10)
    if num == 5:
        break
    else:
        print(num, end=" ")
        n = n + 1
print(n)