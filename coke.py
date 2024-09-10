#Coke Machine CS50 Problem Set 2

cost = 50

while cost != 0:
    print(f"Amount due: {cost}")
    money = input("Insert coin: " )
    cost = cost - int(money)

