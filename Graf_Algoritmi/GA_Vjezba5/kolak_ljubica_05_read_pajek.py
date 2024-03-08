def neighborhood_list(vertices, arcs):
    dict = {}
    
    for vertex in vertices:
        key, lst = vertex[1], []
        for arc in arcs:
            if arc[0] == vertex[0]:
                neighbor = None
                for v in vertices:
                    if v[0] == arc[1]:
                        neighbor = v[1]
                lst.append((neighbor, arc[2]))
        dict[key] = lst
    return dict

def read_pajek(file):
    pajek_file = open(file, 'r')
    all_lines = pajek_file.readlines()
    lst = [line.split() for line in all_lines]
    vertices, arcs = [], []
    
    vertices_index = lst.index(['*vertices'])
    arcs_index = lst.index(['*arcs'])
    
    for i in range(len(lst)):
        if '*vertices' in lst[i]:
            for j in range(i + 1, arcs_index - vertices_index):
                vertices.append([lst[j][0], lst[j][1]])
        if '*arcs' in lst[i]:
            for j in range(i + 1, len(lst)):
                if len(lst[j]) >= 2:
                    arcs.append([lst[j][0], lst[j][1], int(lst[j][2])])
    pajek_file.close()
    return neighborhood_list(vertices, arcs)
                
    
def main():
    print(read_pajek('airports-split.net'))
    
if __name__ == '__main__':
    main()