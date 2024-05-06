import math
a = int(input())
b = int(input())
c = int(input())
if a + b > c and a + c > b and b + c > a:
    print("is a triangle")
    p = (a + b + c)/2
    area = math.sqrt(p * (p - a) * (p - b) * (p - c))
    print("area is =", area)
else:
    print("not a triangle")