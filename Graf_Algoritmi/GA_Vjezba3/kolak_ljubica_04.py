#zadatak4

def create_dict(file):
    my_file = open(file, 'r')
    dict = {}
    
    for line in my_file:
        lst = []
        elements = line.split()
        number1 = int(elements[0])
        number2 = int(elements[1])
        lst.append(number2)
        dict[number1] = lst
    my_file.close()
    return dict

print(create_dict('zadatak4.txt'))