import sys

def delete_even_digits():
    for line in sys.stdin:
        n = int(input())
        for i in range(n+1):
            if line[i] %2 != 0:
                new.append(i)
    return new

new = []
print(delete_even_digits())