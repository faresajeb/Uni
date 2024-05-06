while True:
    try:
        numbers = input().split()
        n = len(numbers)
        DNS = False
        for i in range(n):
            if int(numbers[i]) < int(numbers[i + 1]) < int(numbers[i + 2]) or int(numbers[i]) > int(numbers[i + 1]) > int(numbers[i + 2]):
                DNS = True
        if DNS:
            print("YES")
        else:
            print("NO")
    except EOFError:    
        break