from kolak_ljubica_04_read_pajek import read_pajek


#iz liste susjedstva u matricu susjedstva 
def nlist_to_nmatrix(graph):
    matrix = []
    
    for edges in graph.values():
        lst = []
        for vertice in graph.keys():
            flag = False
            for edge in edges:
                if vertice in edge:
                    flag = True
            if flag:
                lst.append(1)
            else:
                lst.append(0)
        matrix.append(lst)
    return matrix


def sort_edges_by_capital(graph):
    sorted_graph = {}
    for vertex, edges in graph.items():
        sorted_edges = sorted(edges, key=lambda x: (x[0], x[1])) 
        sorted_graph[vertex] = sorted_edges
    return sorted_graph

def remove_duplicate_edges(graph):
    new_graph = {}
    for vertex, edges in graph.items():
        new_edges = set()
        for neighbor, id in edges:
            if (neighbor, id) not in new_edges and (vertex, id) not in new_graph.get(neighbor, []): 
                new_edges.add((neighbor, id))
        new_graph[vertex] = list(new_edges)

    return sort_edges_by_capital(new_graph)


#iz liste susjedstva u matricu incidencije 
def nlist_to_imatrix(graph): 
    matrix = []
    all_edges = []
    new_graph = remove_duplicate_edges(graph)
    
    for edges in new_graph.values():
        for edge in edges:
            all_edges.append(edge)
    for key, value in graph.items():
        arr = []
        for edge in all_edges:
            if key == edge[0]:
                #arr.append(-1)
                arr.append(1)
            elif edge in value:
                arr.append(1)
            else:
                arr.append(0)
        matrix.append(arr)
    return matrix

#iz matrice susjedstva u listu susjedstva 
def nmatrix_nlist(matrix):
    
    dict = {}
    for i in range(len(matrix)):
        vertex = chr(ord('A') + i) 
        edges = []
        for j in range(len(matrix[0])):
            if matrix[i][j] == 1:
                edges.append(chr(ord('A') + j))

        dict[vertex] = edges
    return dict

             

#iz matrice susjestva u matricu incidencije 
def nmatrix_imatrix(matrix):
    matrix_incidence, column_num = [], 0
    
    for row in matrix:
        for element in row:
            if element == 1:
               column_num += 1
    
    column_num = column_num // 2
   
    for i in range(len(matrix)):
        row = []
        for j in range(column_num):
            row.append(0)
        matrix_incidence.append(row)


    index = 0
    for i in range(len(matrix)):
        for j in range(i + 1, len(matrix)):
            if matrix[i][j] == 1:
                matrix_incidence[i][index] = 1
                matrix_incidence[j][index] = 1
                index += 1
    return matrix_incidence


#iz matrice incidencije u matricu susjedstva
def imatrix_nmatrix(matrix_incidence):
    matrix_neighborhood = []
    
    for i in range(len(matrix_incidence)):
        row = [0] * len(matrix_incidence)
        matrix_neighborhood.append(row)
    
    for i in range(len(matrix_incidence[0])):
        new_row, new_column = None, None
        for j in range(len(matrix_incidence)):
            if matrix_incidence[j][i] == 1:
                if new_row is None:
                    new_row = j
                else:
                    new_column = j
        if new_column is not None and new_row is not None:
            matrix_neighborhood[new_row][new_column] = 1
            matrix_neighborhood[new_column][new_row] = 1
    return matrix_neighborhood
    
    


#iz matrice incidencije u listu susjedstva 
def imatrix_nlist(matrix_incidence):
    dict = {}
    
    for i in range(len(matrix_incidence)):
        lst = []
        for j in range(len(matrix_incidence[0])):
            if matrix_incidence[i][j] == 1:
                for k in range(len(matrix_incidence)):
                    if k != i and matrix_incidence[k][j] == 1:
                        lst.append(chr(ord('A') + k))
                   
        dict[chr(ord('A') + i)] = lst

    return dict
                
def main():
    pajek_graph = read_pajek('euler.net')
    matrix_incidence = nlist_to_imatrix(pajek_graph)
    matrix_neigborhood = nlist_to_nmatrix(pajek_graph)
    print("GRAF:", pajek_graph)
    print("MATRICA SUSJEDSTVA iz LISTE SUSJEDSTVA\n", nlist_to_nmatrix(pajek_graph), "\n")
    print("MATRICA INCIDENCIJE iz LISTE SUSJEDSTVA\n", nlist_to_imatrix(pajek_graph), "\n")
    print("LISTA SUSJEDSTVA iz MATRICE SUSJEDSTVA\n", nmatrix_nlist(matrix_neigborhood), "\n")
    print("MATRICA INCIDENCIJE iz MATRICE SUSJEDSTVA\n", nmatrix_imatrix(matrix_neigborhood), "\n")
    print("MATRICA SUSJEDSTVA iz MATRICE INCIDENCIJE\n", imatrix_nmatrix(matrix_incidence), "\n")
    print("LISTA SUSJEDSTVA iz MATRICE INCIDENCIJE\n", imatrix_nlist(matrix_incidence), "\n")

if __name__ == '__main__':
    main()