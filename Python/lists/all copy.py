import random
list = []
odd = []
even = []
n = int(input("n = "))
evens = True
for i in range(n):
    list.append(random.randint(1, 10))
    if list[i] % 2 != 0:
        odd.append(list[i])
        evens = False
    else:
        even.append(list[i])
print(list)
print(sum(list))
print(min(list))
print(max(list))
print(evens)
print(sorted(even))
print(sorted(odd, reverse=True))
