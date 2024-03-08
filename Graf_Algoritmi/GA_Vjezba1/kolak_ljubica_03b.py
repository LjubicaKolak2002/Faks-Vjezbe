#zadatak3b

def is_prime(number):
    if number <= 1:
        return False
    for i in range(2, number):
        if number % i == 0:
            return False
    return True

def nth_prime(n):
    cnt = 0
    first = 2
    while (True):
        if is_prime(first):
            cnt += 1
        if cnt == n:
            return first
        first += 1
        
n = int(input("Unesite n: "))
while n <= 0:
    print("KRIVI UNOS!")
    n = int(input("Unesite n: "))
print("N-ti prost broj je: ",nth_prime(n))