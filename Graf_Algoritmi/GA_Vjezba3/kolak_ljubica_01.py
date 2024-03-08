#zadatak1
from kolak_ljubica_matrix import read_matrix
             
       
def sum_of_elements(file):
    matrix = read_matrix(file)
    sum1, sum2 = 0, 0
    
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            if (j > i):
                sum1 += matrix[i][j]
            if (i + j < len(matrix) - 1):
                sum2 += matrix[i][j]
                
    if len(matrix) != len(matrix[0]):
        return 0, 0
    else:
        return sum1, sum2

print(sum_of_elements('zadatak1.txt'))
                