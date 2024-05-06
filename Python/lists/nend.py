while True:
    try:
        flag = False
        a = input().split()
        n = len(a)
        for i in range(len(a) - 2):
            if int(a[i]) < int(a[i+1]) < int(a[i+2]) or int(a[i]) < int(a[i+1]) < int(a[i+2]) :
                flag = True
        if flag == True:
            print("yes")
        else:
            print("no")
    except EOFError:
        break