def great(name: str, country_code: str = "HU"):
    match country_code:
        case "HU":
            print("Szia {}!".format(name))
        case "EN":
            print("Hi {}!".format(name))
        case "FI":
            print("Moi {}!".format(name))
great("fares", "EN")

# name = input()
# code = input()
# match code:
#     case "HU":
#         print("szia", name)
#     case "EN":
#         print("hi", name)