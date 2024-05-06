import random
s1 = set()
s2 = set()
n = int(input())
m = int(input())
while len(s1) <= n:
    s1.add(random.randint(1, 10))
while len(s2) <= m:
    s2.add(random.randint(1, 10))
print(len(s1))
print(len(s2))
print(s1|s2)
print(s1&s2)
print(s1-s2)
print(s1^s2)