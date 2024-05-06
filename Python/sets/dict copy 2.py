shoppinglist = dict([
("apple", 2),
("pear", 1),
("peach", 5),
])
print(shoppinglist)

print(shoppinglist["apple"]) # 2
print("apple" in shoppinglist) # True
del shoppinglist["apple"]
shoppinglist["plum"] = 7
print(shoppinglist)
#{'pear': 1, 'peach': 5, 'plum': 7}
try:
    print(shoppinglist["papaja"])
except KeyError as e:
    print("Not in it!") 

for key in shoppinglist: #keys
    print(key)
for value in shoppinglist.values(): #values
    print(value)
print("Sum:", sum(shoppinglist.values()))
for key, value in shoppinglist.items():#key-values
    print(f"{key}: {value} kg")