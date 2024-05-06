def modify(func):
    func[0] = 2 # modify object
original = [7]
modify(original)
print(original) 