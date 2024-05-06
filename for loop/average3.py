import sys
sum = 0
c = 0
for n in sys.stdin:
    sum += int(n)
    c += 1
print("{0:.2f}".format(sum / c))