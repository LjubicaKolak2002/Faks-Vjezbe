#include "hangman.h"
#include <iostream>
#include <fstream>
#include <vector>
#include<algorithm>
#include<string>
using std::string;
using namespace std;

void HangmanModel::openFile() {

    string line;
    string movie;
    ifstream myfile("movies.txt");
    int random = 1;
    int cnt = 0;

    srand(time(0));
    random = rand() % 38;
    while (getline(myfile, line))
    {
        cnt++;
        if (cnt == random)
        {
            movie += line;
        }

    }
    myfile.close();
    transform(movie.begin(), movie.end(), movie.begin(), ::toupper);
    setMovie(movie);
}

void HangmanModel::setMovie(string movie) {
    this->movie = movie;
}

char HangmanController::userEntry() {

    char letter;
    cout << "Unesite slovo " << endl;
    cin >> letter;

    return letter;
}

//funkcija za provjeru slova
void HangmanController::checkLetter(HangmanModel& hModel, HangmanView& vModel, char letter) {
    for (int i = 0; i < hModel.getMovie().length(); i++) {
        if ((toupper(hModel.getMovie()[i])) == toupper(letter)) {
            string s(1, letter); 
            string updateGuess = hModel.getGuessMovie().replace(i, 1, s);
            transform(updateGuess.begin(), updateGuess.end(), updateGuess.begin(), ::toupper);
            hModel.setGuessMovie(updateGuess);
            hModel.setInGame(true);
        }
    }

    if (hModel.getInGame() != true) {
        this->updateLives(hModel);
        vModel.updateHangmanStand(hModel.getLives());

    }
    hModel.setInGame(false);

}

void HangmanController::updateLives(HangmanModel& cModel) {
    int lives = cModel.getLives();
    lives--;
    cModel.setLives(lives); 
    cout << "Zivoti nakon pogadanja " << cModel.getLives() << endl;
}

bool HangmanController::checkIfGameIsOver(HangmanModel& cModel) {
    return cModel.getLives() == 0;
}

string HangmanView::displayUsedLetter(HangmanModel vModel) {
    return vModel.getGuessMovie();
}

//ispis postolja
HangmanView::HangmanView() {
    for (int l = 0; l <= 6; l++) {
        stand[l] = new char[8];
    }
    for (int i = 0; i <= 6; i++) {
        for (int j = 0; j <= 8; j++) {
            if ((i == 0) || (i == 6)){
                stand[i][j] = '-';
            }
            else if (j == 0) {
                stand[i][j] = '|';
            }
            else if ((i == 1) && (j == 5)) {
                stand[i][j] = '|';
            }
            else if ((i == 1) && (j == 1)) {
                stand[i][j] = '/';
            }
            else {
                stand[i][j] = ' ';
            }
        }
    }
}
//dodavanje dijelova na vjesalo
void HangmanView::updateHangmanStand(int lives) {
    if (lives == 6) {
        this->stand[2][5] = 'O';
    }
    else if (lives == 5) {
        this->stand[3][5] = '|';
    }
    else if (lives == 4) {
        this->stand[3][4] = '/';
    }
    else if (lives == 3) {
        this->stand[3][6] = '\\';
    }
    else if (lives == 2) {
        this->stand[4][5] = '|';
    }
    else if (lives == 1) {
        this->stand[5][4] = '/';
    }
    else if (lives == 0) {
        this->stand[5][6] = '\\';
    }
}
//prikaz trenutnog Hangmana
void HangmanView::displayCurrentProgress() {
    for (int i = 0; i <= 6; i++) {
        for (int j = 0; j <= 8; j++) {
            cout << this->stand[i][j];
        }
        cout << endl;
    }
}

//prikaz cijelog Hangmana
void HangmanView::displayHangman() {
    this->stand[2][5] = 'O';
    this->stand[3][5] = '|';
    this->stand[3][4] = '/';
    this->stand[3][6] = '\\';
    this->stand[4][5] = '|';
    this->stand[5][4] = '/';
    this->stand[5][6] = '\\';
}
