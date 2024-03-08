#zadatak1

while (True):
    a = int(input("Unesite prvi broj: "))
    b = int(input("Unesite drugi broj: "))
    c = int(input("Unesite treci broj: "))
    
        
    if a <= 0 or b <= 0 or c <= 0:
        print("KRAJ")
        break
    else:
        hipotenuza = max(a, b, c)
        #print(hipotenuza, "HIPOTENUZA")
        if hipotenuza == a:
            kateta1, kateta2 = b, c
        elif hipotenuza == b:
            kateta1, kateta2 = a, c
        else:
            kateta1, kateta2 = a, b
            
        if kateta1 ** 2 + kateta2 ** 2 == hipotenuza ** 2 :
                print("Unesena trojka je pitagorejska")
        else:
            print("Unesena trojka nije pitagorejska")