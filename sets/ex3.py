word = input()
s = {}
while word != '':
    if word in s:
        s[word] += 1
    else:
        s[word] = 1
    word = input()
for key, value in s.items():
    print(f'{key}:{value}')