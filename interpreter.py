#Math Interpreter CS50 Problem Set 1

x, y, z = input("Expression: ").split()

xn = float(x)
zn = float(z)

def main():
    if y == "+":
        yn = float(xn + zn)
        print(yn)
    elif y == "-":
        yn = float(xn - zn)
        print(yn)
    elif y == "/":
        yn = float(xn / zn)
        print(yn)
    elif y == "*":
        yn= float(xn * zn)
        print(yn)

main()