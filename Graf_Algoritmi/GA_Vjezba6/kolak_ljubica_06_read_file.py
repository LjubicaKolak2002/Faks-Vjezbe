import csv

def read_csv(file):
    with open(file) as f:
        reader = csv.reader(f, delimiter=',')
        edges = list(reader)  #bridovi
        cities = edges[0][1:]  #gradovi
        matrix = edges[1:]  
    return cities, matrix

def read_cities(file):
    cities = []
    with open(file) as f:
        for line in f:
            cities.append(line.strip())
    return cities

def to_graph(cities, matrix, my_cities):
    graph = {}

    for i in range(len(cities)):
        node = cities[i]
        neighbors = []

        if node in my_cities:
            for j in range(len(cities)):
                distance = matrix[i][j + 1]

                if i != j and distance != '-' and cities[j] in my_cities:
                    if distance.isnumeric():
                        neighbors.append((cities[j], int(distance)))

            if neighbors:
                graph[node] = neighbors

    return graph


def main():
    cities, matrix = read_csv('distance.csv')
    my_cities = read_cities('cities.txt')
    graph = to_graph(cities, matrix, my_cities)
    print(graph)
    
if __name__ == '__main__':
    main()

