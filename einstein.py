#Einstein CS50 Problem Set 0
def convert():
    m = int(input("m: "))
    c = int(300000000)
    E = int(square(c) * m)
    print("E:", E)

def square(n):
    return n * n

convert()