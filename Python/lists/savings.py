sum = 0
c = 0
while True:
    try:
        line = input().split(':')
        money = line[1].split(' ')
        twenty = True
        for i in range(len(money)):
            sum += int(money[i])
            if int(money[i]) < 20:
                twenty = False
        if twenty == True:
            c += 1
    except EOFError:
        print(sum)
        print(c)
