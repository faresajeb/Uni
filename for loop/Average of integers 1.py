n = int(input())
total = 0
count = 0
for i in range(n):
    num = int(input())
    total += num
    count += 1
average = total / count
print("{:.2f}".format(average))



