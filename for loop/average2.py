total = 0
count = 0
for i in range(1000) :
    num = int(input())
    if num != 0:
        total += num
        count += 1
    else:
        break
average = total / count
print("{:.2f}".format(average))



