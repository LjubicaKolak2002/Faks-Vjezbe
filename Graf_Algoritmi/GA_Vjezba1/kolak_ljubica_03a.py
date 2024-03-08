#zadatak3a

def is_prime(number):
    if number <= 1:
        return False
    for i in range(2, number):
        if number % i == 0:
            return False
    return True

def count_prime(num1, num2):
    cnt = 0
    for i in range(round(num1), round(num2) + 1):
        if is_prime(i):
            cnt += 1
    return cnt

'''number = int(input("Unesite broj: "))
if is_prime(number):
    print("Uneseni broj je prost")
else:
    print("Uneseni broj nije prost")'''

num1 = float(input("Unesite prvi broj: "))
num2 = float(input("Unesite drugi broj: "))
print("Broj prostih brojeva je: ",count_prime(num1, num2))
    
