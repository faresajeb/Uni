def quadrilateral(a: int, b: int = 0) -> int:
    if b == 0:
        b = a
        return a * b
    else:
        return a * b
print('Area of square: ', quadrilateral(10))
print('Area of rectangle: ', quadrilateral(10, 12))