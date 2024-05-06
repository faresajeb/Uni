while True:
    try:
        word = input()
        n = ""
        for l in word:
            if l not in "aeiou":
                n = n + l
        print(n)
    except EOFError:
        break