#zadatak2
from kolak_ljubica_matrix import create_matrix

def create_lst(matrix):
    lst = []
    
    for line in matrix:
        sum = 0
        for element in line:
            sum += element
        lst.append(sum)
    return lst


matrix = create_matrix()        
print(create_lst(matrix))