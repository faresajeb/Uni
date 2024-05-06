year = int(input("year: "))
month = int(input("month: "))
match month:
    case 1 | 3 | 5 | 7 | 8 | 10 | 12:
        print("days = ",31)
    case 4 | 6 | 9 | 11:
        print("days = ",30)
    case 2:
        if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0:
            print("days = ",29)
        else:
            print("days = ",28)
            
