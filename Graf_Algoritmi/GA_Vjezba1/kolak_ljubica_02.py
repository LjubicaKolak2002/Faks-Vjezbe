#zadatak2

def print_triangle(n):
    for i in range(n + 1):
        for j in range(i * 2 - 1):
            if (i == j):
                print((i + j - 2) % 10, end = " ")
            elif (i > j):
                print((i + j) % 10, end = " ")
            else:
                print((((j - (j - i)) + (i - (j - i)) - 2)) % 10, end = " ")
        print()



n = int(input("Unesite n: "))
while (n >= 20):
    print("KRIVI UNOS!")
    n = int(input("Unesite n: "))
print_triangle(n)