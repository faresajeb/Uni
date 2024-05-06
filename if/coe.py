import math
a = int(input("a = "))
b = int(input("b = "))
c = int(input("c = "))
d = (b * b) - (4 * a * c)
print ("d = ", d)
if a == 0 or b == 0:
    print("linear equation")
else:
    if d < 0:
        print("no roots")
    elif d == 0:
        print("one root")
        x = b / (2 * a)
        print("x = ", int(x))
    else:
        print("two roots:")    
        x1 = (-b + math.sqrt(d)) / (2 * a)
        x2 = (-b - math.sqrt(d)) / (2 * a)
        print("x1 = ", int(x1))
        print("x2 = ", int(x2))
        
