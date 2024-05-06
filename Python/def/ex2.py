def table(base: int, start: int, end: int) -> None:
    print("Part of the multiplication table of {}:".format(base))
    n = start
    while n <= end:
        print("{0} x {1} = {2}".format(n, base, n * base))
        n = n + 1
table(2, 1, 10)
table(8, 10, 20)
table(3, 1, 10)