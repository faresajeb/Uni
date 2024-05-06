time = int(input("what is the time"))
if time >= 5 and time < 12:
    print("good morning")
elif time >= 12 and time < 18:
    print("Good Afternoon!")
elif time >= 18 and time < 22:
    print("Good Evening!")
elif (time >= 22 and time <=24) or (time>=0 and time <= 5):
    print("Good Night!")
else:
    print("Wrong value!")