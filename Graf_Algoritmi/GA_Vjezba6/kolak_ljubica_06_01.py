from itertools import permutations
from kolak_ljubica_06_read_file import read_csv, read_cities, to_graph
import time

def find_path(all_paths, min_distance):
    for distance, path in all_paths.items():
        if distance == min_distance:
            return path


def brute_force(matrix):
    perms = list(permutations(range(len(matrix)), len(matrix)))  
    distance_list, path, lst, distance = [], {}, [], 0
    
    for perm in perms:
        for element in range(len(perm)):
            if element < len(perm) - 1:
                distance += int(matrix[perm[element]][perm[element+1]])
                lst.append(matrix[perm[element]][perm[element+1]])
            else:
                distance += int(matrix[perm[element]][perm[0]])
                lst.append(matrix[perm[element]][perm[0]])
                
        distance_list.append(distance)
        path[distance] = lst 
        distance = 0
        lst = []
        
    final_path = find_path(path, min(distance_list))
    return min(distance_list, key = int), final_path

def nlist_to_nmatrix(graph):
    matrix = []
    cities = list(graph.keys())
    
    for edges in graph.values():
        lst = []
        for vertice in range(len(cities)):
            flag = False
            for edge in edges:
                if cities[vertice] in edge:
                    value = edge[1]
                    flag = True
            if flag:
                lst.append(value)
            else:
                lst.append(0)
        matrix.append(lst)
    return matrix


def main():
    cities, matrix = read_csv('distance.csv')
    my_cities = read_cities('cities.txt')
    graph = to_graph(cities, matrix, my_cities)
    neighbour_matrix = nlist_to_nmatrix(graph)
    start = time.time()
    distance, path = brute_force(neighbour_matrix)
    end = time.time()
    print('Udaljenost:', distance)
    print('Vrijeme izvođeja:', end - start)
    print('Put:', path)
  
    
if __name__ == '__main__':
    main()