word = input()
while word != "END":
    r = ""
    for l in word:
        if l.isupper():
            r =  r + l * 2
        else:
            r = r + l
    print(r)
    word = input()