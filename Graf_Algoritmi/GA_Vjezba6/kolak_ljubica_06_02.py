from kolak_ljubica_06_read_file import read_cities, read_csv, to_graph
import time
          
def min_distance(visited): 
    all_values = []
    for value in visited.values():
        all_values.append(int(value))

    min_element = min(all_values)
    for key, value in visited.items():
        if int(value) == min_element:
            return key, min_element

def unvisited_neighbours(neighbours, visited):
    unvisited = {}

    for neighbour, distance in neighbours: 
        if neighbour not in visited:
            unvisited[neighbour] = distance

    return min_distance(unvisited) 


def nearest_neighbour(start, graph):
    visited = []

    visited.append('Amsterdam') 
    currentCity = 'Amsterdam'

    sum_distance = 0

    while len(visited) < len(graph.keys()):
        node, distance = unvisited_neighbours(graph[currentCity], visited)
        visited.append(node)
        currentCity = node
        sum_distance += distance

    sum_distance += graph[currentCity][int(start)][1]
    return visited, sum_distance



def main():
    
    cities, matrix = read_csv('distance.csv')
    my_cities = read_cities('cities.txt')
    graph = to_graph(cities, matrix, my_cities)
    start = time.time()
    path, distance = nearest_neighbour(0, graph)
    end = time.time()
    print('Udaljenost:', distance)
    print('Vrijeme izvođeja:', end - start)
    print('Put:', path)
  
if __name__ == '__main__':
    main()
    
