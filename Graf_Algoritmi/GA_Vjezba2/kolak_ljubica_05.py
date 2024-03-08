#zadatak5

def max_iterative(lst):
    arr_num = []
    for element in lst:
        if type(element) == int or type(element) == float or type(element) == complex:
            arr_num.append(element)
    return max(arr_num)
            
lst = [7, 18, 3, 'a', True, (2,3)]
print("Rezultat iterativne: ", max_iterative(lst))

def max_recursive(lst, n):
    if n == 1:
        return lst[0]
    if type(lst[n - 1]) == int or type(lst[n - 1]) == float or type(lst[n - 1]) == complex:
        result = max(lst[n - 1])
    return result


n = len(lst)
print("Rezultat rekurzivne: ",max_iterative(lst))
