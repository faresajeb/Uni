n = int(input())
div = 1
for i in range(2,n):
 if n % i == 0:
  div = i
if div == 1:
 print("prime")
else:
 print("grd", div)