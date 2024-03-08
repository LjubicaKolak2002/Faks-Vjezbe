import networkx as nx
import time

def dijkstra_algorithm(graph, start):
    G = nx.read_pajek(graph)
    paths = nx.single_source_dijkstra_path_length(G, start)
    return paths
    
def bellman_ford(graph, start):
    G = nx.read_pajek(graph)
    paths = nx.single_source_bellman_ford_path_length(G, start)
    return paths
    
        
def main():        
    graph = 'gradovi-udaljenost.net'
    city = 'BER'
    start = time.time()
    result1 = dijkstra_algorithm(graph, city)
    
    print(f'Dijkstra - udaljenost od {city} od ostalih gradova:')
    for node, distance in result1.items():
        print(f'{node} : {distance}')
    end = time.time()
    print('\nVrijeme izvršavanja:', end - start)
    
    start2 = time.time()
    result2 = bellman_ford(graph, city)
    
    print(f'\nBellman-ford - udaljenost od {city} od ostalih gradova:')
    for node, distance in result2.items():
        print(f'{node} : {distance}')
    end2 = time.time()
    print('\nVrijeme izvršavanja:', end2 - start2)

    
if __name__ == '__main__':
    main()
