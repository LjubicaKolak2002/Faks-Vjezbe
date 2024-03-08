import networkx as nx
import time

def euclidean_distance(start, end, graph):
    position = nx.spring_layout(graph)
    x1, y1 = position[start]
    x2, y2 = position[end]
    return ((x2 - x1) ** 2 + (y2 - y1) ** 2) ** 0.5

def greedy_bfs(file, start, end):
    graph = nx.read_pajek(file)
    visited = set()
    result = [start]

    while result[-1] != end:
        current_node = result[-1]
        neighbors = []

        for node in graph.neighbors(current_node):
            if node not in visited:
                neighbors.append(node)

        if not neighbors:
            result.pop()
        else:
            next_node = min(neighbors, key=lambda node: euclidean_distance(node, end, graph))
            visited.add(next_node)
            result.append(next_node)
    return result


def astar(graph, start_city, end_city):
    G = nx.read_pajek(graph)
    path = nx.astar_path(G, start_city, end_city)
    return path

def main():
    graph_file = 'gradovi-udaljenost.net'
    start_city = 'BER'  
    end_city = 'DUB'
    
    start = time.time()
    path = greedy_bfs(graph_file, start_city, end_city)
    end = time.time()
    print(f'Greedy BFS algoritam\nNajkraći put između {start_city} i {end_city}: {path}')
    print('Vrijeme izvršavanja: ', end - start)
    
    start2 = time.time()
    path2 = astar(graph_file, start_city, end_city)
    end2 = time.time()
    print(f'\nA* algoritam\nNajkraći put između {start_city} i {end_city}: {path2}')
    print('Vrijeme izvršavanja', end2 - start2)
  

if __name__ == '__main__':
    main()
