#zadatak2

a = float(input("Donja granica prvog intervala: "))
b = float(input("Gornja granica prvog intervala: "))
c = float(input("Donja granica drugog intervala: "))
d = float(input("Gornja granica drugog intervala: "))


first = max(a, c)
second = min(b, d)

if first >= second:
    print("Presjek intervala je prazan skup")
else:
    print("Presjek intervala je: ", list((first, second)))