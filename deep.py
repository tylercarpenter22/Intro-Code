#Deep Thought CS50 Problem Set 1

x = input("What is the answer to the Great Question of Life, the Universe and Everything? ").lower().strip()

def main():
    if x == "42":
        print("Yes")
    elif x== "forty-two":
        print("Yes")
    elif x== "forty two":
        print("Yes")
    else:
        print("No")

main()