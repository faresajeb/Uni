pe = 0
n = int(input())
for i in range(n):
    num = int(input())
    if num % 2 == 0 and num > 0:
        pe = pe + 1
print(pe)