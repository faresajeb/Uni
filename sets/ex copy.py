import random
s1 = set()
s2 = set()
while len(s1) <= 9:
    s1.add(random.randint(1, 100))
while len(s2) <= 9:
    s2.add(random.randint(1, 100))
print(s1)
print(s2)
print(len(s1))
print(len(s2))
print(s1|s2)
print(s1&s2)
print(s1-s2)
print(s1^s2)