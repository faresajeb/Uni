import random
s1 = set()
s2 = set()
n = int(input())
m = int(input())
while len(s1) <= n:
    num = (random.randint(1, 20))
    if num % 2 == 0:
        s1.add(num)
while len(s2) <= m:
    num = (random.randint(1, 20))
    if num % 2 != 0:
        s2.add(num)
print(s1)
print(s2)
print(s1|s2)