import random
n = int(input("n="))
list = []
while True:
    if len(list) == n:
        break
    x = random.randint(1, 10)
    if x % 2 == 0:
        list.append(x)
print(list)