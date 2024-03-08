from kolak_ljubica_05_read_pajek import read_pajek

def kruskal_algorithm(graph):
    edges = []

    for vertex, neighbors in graph.items():
        for neighbor, weight in neighbors:
            edges.append((vertex, neighbor, weight))
    edges.sort(key=lambda x: x[2])  

    tree_edges = []
    vertices_graph = {}

    for edge in edges:
        node1, node2, weight = edge[0], edge[1], edge[2]

        if node1 in vertices_graph:
            lst_node1 = vertices_graph[node1]
        else:
            lst_node1 = [node1]

        if node2 in vertices_graph:
            lst_node2 = vertices_graph[node2]
        else:
            lst_node2 = [node2]

        if lst_node1 == lst_node2:
            continue  

        united_lst = lst_node1 + lst_node2   
        for node in united_lst:
            vertices_graph[node] = united_lst
    
        tree_edges.append((node1, weight, node2))
    
    min_weight = 0
    for element in tree_edges:
        min_weight += element[1]

    return tree_edges, min_weight


def main():
    graph = read_pajek('airports-split.net')
    (mst), (weight) = kruskal_algorithm(graph)
    print("Minimalna tezina: ", weight)
    print("Minimalno razapinjuce stablo: ", mst)

if __name__ == '__main__':
    main()
