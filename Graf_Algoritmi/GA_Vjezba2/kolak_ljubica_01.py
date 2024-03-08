# zadatak1

def intersection(lst1, lst2):
    set_lst1 = set(lst1)
    set_lst2 = set(lst2)
    return list(set_lst1.intersection(set_lst2))


lst1 = []
n1 = int(input("Unesite duljinu prve liste: "))
for i in range(0, n1):
    element = int(input(("Unesite element: ")))
    lst1.append(element)

lst2 = []
n2 = int(input("Unesite duljinu prve liste: "))
for i in range(0, n2):
    element = int(input(("Unesite element: ")))
    lst2.append(element)
    
print(intersection(lst1, lst2))
