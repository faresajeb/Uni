n1 = int(input("num1 "))
n2 = int(input("num2 "))
sum = 0
for i in range(n1,n2+1):
    if i % 3 == 0:
        sum = sum + i
        print(sum)