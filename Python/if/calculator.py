Operator = input("enter operator ")
a = int(input("a = "))
b = int(input("b = "))
c = 1
if Operator == "+":
    print("a + b = ",a + b)
elif Operator == "-":
    print("a - b = ", a - b)
elif Operator == "*":
    print("a * b = ", a * b)
elif Operator == "^":
      print("a ^ b =", a ** b)
elif Operator == "/" or Operator == "//" or Operator == "%" and b == 0:
        print("can't divide by zero")
elif Operator == "/":
        print("a / b = ", a / b)
elif Operator == "//":
        print("a // b = ", a // b)
elif Operator == "%":
        print("a % b = ", a % b)

