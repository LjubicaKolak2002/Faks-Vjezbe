#zadatak3c

def is_prime(number):
    if number <= 1:
        return False
    for i in range(2, number):
        if number % i == 0:
            return False
    return True


def adjacent_prime(n):
    arr = []
    for i in range(2, n):
        if is_prime(i) and is_prime(i + 2):
            if i + 2 <= n:
                arr.append((i, i + 2))
    return arr

n = int(input("Unesite n: "))
print("Susjedni prosti brojevi:", adjacent_prime(n))