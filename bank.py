#Home Federal Savings Bank CS50 Problem Set 1

x = input("Greeting: ").strip().lower()

def main():
    if x.startswith("hello"):
        print("$0")
    elif x.startswith("h"):
        print("$20")
    else:
        print("$100")
main()