from kolak_ljubica_05_read_football import read_pajek
from kolak_ljubica_05_read_eva import read_eva


def dfs(node, graph, visited, component):
    visited[node] = True
    component.append(node)

    for neighbor in graph.get(node, []):
        if neighbor not in visited or not visited[neighbor]:
            dfs(neighbor, graph, visited, component)

def find_components(graph):
    visited, components = {}, []
    for node in graph:
        visited[node] = False
    
    for node in graph:
        if not visited[node]:
            component = []
            dfs(node, graph, visited, component)
            components.append(component)
    
    return components

def print_components(graph):
    for i in range(0, 10):
        company = list(graph.keys())[i]
        component = find_components(graph)[i]
        print(company, ":", len(component))


def main():
    graph1 = read_eva('eva.net')
    graph2 = read_pajek('football.net')

    print("FOOTBALL")
    components1 = find_components(graph2)
    max_component = 0
    for component in components1:
        current_length = len(component)
        max_component = max(max_component, current_length)
    
    print("Broj komponenti:", len(components1), "Najveca:", max_component)
    print("\nEVA")
    components2 = find_components(graph1)
    max_component2 = 0
    for component in components2:
        current_length = len(component)
        max_component2 = max(max_component2, current_length)
    
    print("Broj komponenti:", len(components2), "Najveca:", max_component2)
    print_components(graph1)     
    
if __name__ == '__main__':
    main()  