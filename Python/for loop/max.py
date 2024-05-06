n = int(input())
num = int(input())
max = num
for i in range(1,n):
 num = int(input())
 if num > max:
 max = num
print("max is", max)