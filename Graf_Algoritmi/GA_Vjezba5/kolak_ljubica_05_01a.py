from kolak_ljubica_05_read_pajek import read_pajek

def prims_algorithm(graph):
    min_spanning_tree = []
    nodes =  []
    first_node = list(graph.keys())[0]
    nodes.append(first_node)
    min_spanning_tree.append(first_node)
    
    all_weights = [v[1] for values in graph.values() for v in values]
    
    for _ in range(len(graph.keys())):
        new_node, min_weight = None, max(all_weights)
        
        for node in nodes:
            for neighbor, weight in graph[node]:
                if neighbor not in nodes and weight < min_weight:
                    new_node = neighbor
                    min_weight = weight
        
        if new_node != None:
            min_spanning_tree.append(new_node)
            nodes.append(new_node)
    return min_spanning_tree

def main():
    graph = read_pajek('airports-split.net')
    print("Primov algoritam - minimalno razapinjuce stablo")
    tree = prims_algorithm(graph)
    print(tree)
    
if __name__ == '__main__':
    main()
