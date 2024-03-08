from kolak_ljubica_04_read_pajek import read_pajek
from kolak_ljubica_04_01 import nlist_to_nmatrix


def count_vertices(graph):
    return len(graph.keys())


def count_edges(matrix_neigborhood):
    cnt = 0
    for row in matrix_neigborhood:
        cnt += sum(row)
    return cnt // 2


def degree_of_vertex(graph):
    new_dict = {}
    for vertex, edges in graph.items():
        new_dict[vertex] = len(edges)
    return new_dict
        

def max_incidente_edge(graph):
    degrees = degree_of_vertex(graph)
    max_value = max(degrees.values())
    lst = []
    
    for key, values in degrees.items():
        if max_value == values:
            lst.append(key)
    return lst

        
    
            
def main():
    print('Broj vrhova: ', count_vertices(read_pajek('euler.net')))
    neigborhood_matrix = nlist_to_nmatrix(read_pajek('euler.net'))
    print('Broj bridova: ', count_edges(neigborhood_matrix))
    
    
    print('Stupanj svakog vrha: ', degree_of_vertex(read_pajek('euler.net')))
    print("Vrhovi s maksimalnim brojem incidentnih bridova: ", max_incidente_edge(read_pajek('euler.net')))


if __name__ == '__main__':
    main()