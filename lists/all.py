import random
list = []
odd = []
even = []
n = int(input("n = "))
evens = True
while True:
    if len(list) == n:
        break
    else:
        c = random.randint(1,10)
        list.append(c)
        if c % 2 == 0:
            even.append(c)
        else:
            evens = False
            odd.append(c)
print(list)
print(sum(list))
print(min(list))
print(max(list))
print(evens)
print(sorted(even))
print(sorted(odd, reverse=True))
