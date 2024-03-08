def neighborhood_list(vertices, edges):
    graph = {}

    for vertex in vertices:
        vertex_label = vertex[1]
        lst = []
        for edge in edges:
            if edge[0] == vertex[0]:
                vertex_label2 = None
                for v in vertices:
                    if edge[1] == v[0]:
                        vertex_label2 = v[1]
                lst.append(vertex_label2)
        graph[vertex_label] = lst
    return graph

 

def read_pajek(file):
    pajek_file = open(file, 'r')
    all_lines = pajek_file.readlines()
    lst, vertices, edges =  [], [], []

    for line in all_lines:
        lst.append(line.split())
    
    for i in range(len(lst)):
        if '*Vertices' in lst[i]:
            for j in range(i + 1, int(lst[i][-1]) + 1): 
                vertices.append([lst[j][0], lst[j][1].strip('"')])
        
        if '*Arcs' in lst[i]:
            for j in range(i + 1, len(lst)):
                if len(lst[j]) >= 2:
                    edge = [lst[j][0], lst[j][1], "a" + str(j)]
                    edges.append(edge)
                    
                else:
                    break
                
    return neighborhood_list(vertices, edges)
            

    
def main():
    print(read_pajek('football.net'))

if __name__ == '__main__':
    main()