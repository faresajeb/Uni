s = {}
while True:
    try:
        name = input().split(';')
        n = name[0]
        a = name[1]
        if n in s:
            s[n] = int(a)
        else:
            s[n] = int(a) + 1

    except KeyboardInterrupt:
        print(s)
