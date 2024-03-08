#zadatak3
from kolak_ljubica_matrix import create_matrix

def check_columns(matrix):

    for column in range(len(matrix[0])):
        cnt1, cnt0 = 0, 0
        for row in matrix:
            #print(row[column])
            if row[column] == 1:
                cnt1 += 1
            elif row[column] == 0:
                cnt0 += 1
        
        if cnt1 != 2 or cnt0 != len(matrix) - 2:
            return False
    return True
    
    

matrix = [[1, 1, 0], 
          [1, 0, 1], 
          [0, 1, 1], 
          [0, 0, 0], 
          [0, 0, 0]]
#matrix = create_matrix()
print(check_columns(matrix))
                