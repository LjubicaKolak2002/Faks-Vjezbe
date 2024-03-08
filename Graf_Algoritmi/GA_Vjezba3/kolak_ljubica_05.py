#zadatak5

def reverse_dict(old_dict):
    new_dict = {}
    values_list = []
    
    for key, values in old_dict.items():
        for value in values:
            if value not in new_dict.keys():
                values_list.append(key)
                new_dict[value] = values_list
                values_list = []
            else:
                new_dict[value].append(key)
                
    sorted_dict = dict(sorted(new_dict.items()))
    return sorted_dict


d = {1:[2,3,5], 2:[1, 4], 3:[1,2]}
print(reverse_dict(d))
