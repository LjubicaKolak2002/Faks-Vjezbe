#zadatak3d

def is_prime(number):
    if number < 2:
        return False
    for i in range(2, number):
        if number % i == 0:
            return False
    return True

def check(first, second, array):
    for f, s in array:
        if first == f and second == s or first == s and second == f:
            return False
    return True

def sum_of_prime(number):
    final_Array = []
    for i in range(2, number):
        if is_prime(i) == 1 and is_prime(number - i) and check(i, number - i, final_Array):
            final_Array.append((i, number - i))
            print(i, "+", number - i)


num = int(input("Unesite paran broj: "))
if num % 2 != 0:
    print("Broj treba biti paran!")
    num = int(input("Unesite paran broj: "))
sum_of_prime(num)

