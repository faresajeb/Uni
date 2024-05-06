n = int(input("n = "))
counter = 0
sum = 0
while n != 0:
    counter = counter + 1
    sum = sum + n%10
    n = n // 10
print("Digits = ", counter)
print("sum = ", sum)