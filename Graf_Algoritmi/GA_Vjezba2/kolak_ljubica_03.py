#zadatak3 

#sa dictom za prave susjedne
def adjacent_vowels(string):
    cnt = 0
    for i in range(len(string) - 1):
        if string[i].upper() in ['A', 'E', 'I', 'O', 'U'] and string[i + 1].upper() in ['A', 'E', 'I', 'O', 'U']:
            cnt += 1
    return cnt
            

string = str(input("Unesite string: "))
print(f"Broj susjednih samoglasnika u rijeci {string}: ", adjacent_vowels(string))

def adjacent_vowels2(string):
    dict = {'A':'E', 'E':'I', 'I':'O', 'O':'U', 'U':'A'}
    cnt = 0
    for i in range(len(string) - 1):
        for key, value in dict.items():  
            if string[i].upper() == key and string[i + 1].upper() == value:
                cnt += 1
    return cnt


print(f"Broj pravih susjednih samoglasnika u rijeci {string}: ", adjacent_vowels2(string))