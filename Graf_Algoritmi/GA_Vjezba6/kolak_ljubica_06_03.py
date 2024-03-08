from kolak_ljubica_06_read_file import read_csv, to_graph, read_cities
import time

def degree_of_vertex(graph):
    new_dict = {}
    for vertex, edges in graph.items(): 
        new_dict[vertex] = len(edges)
    return new_dict

def is_third_degree(graph):
    new_graph = degree_of_vertex(graph)
    
    for value in new_graph.values(): 
        if value == 3:
            return True    
    return False
        
def dfs(graph, node, visited=[]):
    visited.append(node) 
        
    if node in graph.keys():
        for neighbour in graph[node]:
            if neighbour[0] not in visited:
                dfs(graph, neighbour[0], visited) 
    return visited

def is_cycle(graph, start): 
    visited = dfs(graph, start)
    
    if visited[-1] in graph.keys():
        for element in graph[visited[-1]]:
            if element[0] == start: 
                return True
    return False


def sorted_edges(graph):
    edges_arr = []
    new_graph = {}
    visited = []
    distance = 0

    for key, values in graph.items():
        for value in values:
            edges_arr.append((key, value[0], value[1]))
   
    edges_arr.sort(key=lambda x: x[2]) 

    while len(visited) < len(graph.keys()):
        min_edge = min(edges_arr, key = lambda x : x[2])

        if min_edge[0] in visited:
            edges_arr.remove(min_edge)
        else:
            new_graph[min_edge[0]] = [(min_edge[1], min_edge[2])]
          
            if not is_third_degree(new_graph) or not is_cycle(new_graph, min_edge[0]):
                distance += min_edge[2]
                visited.append(min_edge[0])
                edges_arr.remove(min_edge)
    return distance, new_graph
  
def main():
    cities, matrix = read_csv('distance.csv')
    my_cities = read_cities('cities.txt')
    graph = to_graph(cities, matrix, my_cities)
    
    start = time.time()
    distance, new_graph = sorted_edges(graph)
    end = time.time()
    print('Udaljenost:', distance)
    print('Vrijeme izvršavanja: ', end - start)
    print('Put:', new_graph)
    
if __name__ == '__main__':
    main()