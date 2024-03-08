def neigborhood_list(vertices, edges):
    graph = {} 
    
    for vertex in vertices:
        vertex_label = vertex
        lst = []
        for edge in edges:
            if edge[0] == vertex: 
                vertex_label2 = None
                for v in vertices:
                    if edge[1] == v:
                        vertex_label2 = v
                lst.append(vertex_label2)
        graph[vertex_label] = lst
    return graph
 

def read_eva(file):
    pajek_file = open(file, 'r')
    all_lines = pajek_file.readlines()
    lst, vertices, edges = [], [], []

    for line in all_lines:
        lst.append(line.strip().split())

    for i in range(len(lst)):
        if '*vertices' in lst[i]:
            for j in range(i + 1, len(lst)):
                if len(lst[j]) >= 2:
                    vertex_number = lst[j][0]
                    vertices.append(int(vertex_number))
                else:
                    break

        if '*arcs' in lst[i]:
            for j in range(i + 1, len(lst)):
                if len(lst[j]) >= 2:
                    edge = (int(lst[j][0].strip('"')), int(lst[j][1].strip('"')))
                    edges.append(edge)
                else:
                    break
              
    return neigborhood_list(vertices, edges)
    
            
def main():
    graph = read_eva('eva.net')
    for k in graph.keys():
        print(k)
    
if __name__ == '__main__':
    main()