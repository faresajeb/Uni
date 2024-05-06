num = int(input())
prod = 1
sum = 0
n = 1
while n <= num:
    sum = sum + n
    prod = prod * n
    n = n+1
    print(sum)
    print("prod", prod)