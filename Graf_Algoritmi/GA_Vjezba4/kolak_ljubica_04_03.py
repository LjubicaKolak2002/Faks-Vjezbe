from kolak_ljubica_04_read_pajek import read_pajek

def is_Euler(graph):
    
    for value in graph.values():
        if (len(value)) % 2 != 0:
            return False
    return True

def main():
    graph = read_pajek('euler.net')
    result = is_Euler(graph)
    if result == True:
        print("Graf je Eulerov")
    else:
        print("Graf nije Eulerov")
        
if __name__ == '__main__':
    main()