line = input()
s = line.split()
a = int(s[0])
b = int(s[1])
gcd = 0
lcm = 0
flag = True
for i in range(1,10000):
    if a % i == 0 and b % i == 0:
        gcd = i
        lcm = (a * b) // gcd
for i in range (2,a):
    if a % i == 0:
        flag = False
for i in range (2,b):
    if b % i == 0:
        flag = False
print(gcd)
print(lcm)
if flag:
    print("prime")
else:
    print("not")