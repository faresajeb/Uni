import random
def generate(li:list):
    for i in range(10):
        li.append(random.randint(1, 100))

def mini(li:list):
    min = li[0]
    for i in range(len(li)):
        if li[i] < min:
            min = li[i]
    return min

def maxi(li:list):
    max = li[0]
    for i in range(len(li)):
        if li[i] > max:
            max = li[i]
    return max

def main():
    li = []
    generate(li)
    print(li)
    print(mini(li))
    print(maxi(li))
if __name__ == "__main__":
    main()