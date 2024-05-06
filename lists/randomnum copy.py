import random
list = []
n = int(input("n = "))
for i in range(n):
    c = random.randint(1,10)
    if c % 2 == 0:
        list.append(c)
print(list)