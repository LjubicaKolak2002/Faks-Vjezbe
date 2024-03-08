#zadatak4
import random

rules = {
    'kamen': 'škare',
    'škare': 'papir',
    'papir': 'kamen'
}

def computer_win(computer, player):
    for key, value in rules.items():
        if key == computer and value == player:
            return True
    return False

def player_win(computer, player):
    for key, value in rules.items():
        if key == player and value == computer:
            return True
    return False



def game():
    n = int(input("Unesite koliko krugova se igra: "))
    cnt = 0
    cnt_player = 0
    cnt_computer = 0

    
    while(cnt < n):
        player = input("\nUnesite jedno od troje ponudenih: kamen, škare, papir\n")
        
        while player != 'kamen' and player != 'papir' and player != 'škare':
             player = input("\nUnesite jedno od troje ponudenih: kamen, škare, papir\n")

        computer = random.choice(list(rules.keys()))
        print("Racunalo je odabralo: ", computer)
        cnt += 1

        
        print(f'\n************************* KRUG {cnt} ***************************\n')  
        

        if computer_win(computer, player):
            cnt_computer += 1
        elif player_win(computer, player):
            cnt_player += 1
        elif computer == player:
            cnt -= 1

        
        print(f"Trenutni rezultat - Računalo: {cnt_computer} Igrač: {cnt_player}")

    if cnt_computer > cnt_player:
        print(f"\nRacunalo: {cnt_computer} Igrač: {cnt_player}. Pobjedilo je RAČUNALO!" )
    elif cnt_player > cnt_computer:
        print(f"\nRačunalo: {cnt_computer} Igrač: {cnt_player}. Pobijedio je IGRAČ!")
    else:
        print(f"\nRačunalo: {cnt_computer} Igrač: {cnt_player}.Neriješeno je")
    

game()