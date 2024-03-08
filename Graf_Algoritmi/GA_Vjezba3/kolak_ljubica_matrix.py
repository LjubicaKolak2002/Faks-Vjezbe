def read_matrix(file):
    with open(file, 'r') as f:
        matrix = []
        for line in f:
            line_arr = []
            elements = line.split()
            for element in elements:
                line_arr.append(int(element))
            matrix.append(line_arr)
    return matrix

def create_matrix():
    matrix = []
    rows = int(input("Unesite broj redaka: "))
    columns = int(input("Unesite broj stupaca: "))

    for i in range(rows):
        arr = []
        for j in range(columns):  
            arr.append(int(input("Unesite element: ")))
        matrix.append(arr)
    return matrix

