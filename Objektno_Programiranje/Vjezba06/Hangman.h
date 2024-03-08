#ifndef HANGMAN_H
#define HANGMAN_H
#include <iostream>
#include <string>
#include <iostream>
using namespace std;
using std::string;

class HangmanModel {
private:
	string movie;
	string guessMovie;  
	int lives;
	bool inGame;

public:
	HangmanModel() {
		openFile();
		for (int i = 0; i < this->movie.length(); i++) {
			if ((isspace(movie[i])) || (ispunct(movie[i])) || (isdigit(movie[i]))) {
				guessMovie += movie[i];
			}
			else {
				guessMovie += "_";
			}
		}
		lives = 7;
		inGame = false;
	}

	void openFile(); 
	void setMovie(string movie); 
	string getMovie() { return movie; };   
	void setGuessMovie(string guessMovie) { this->guessMovie = guessMovie; };
	string getGuessMovie() { return guessMovie; }; 
	void setLives(int lives) { this->lives = lives; };
	int getLives() { return lives; };
	void setInGame(bool flag) { this->inGame = flag; };
	int getInGame() { return inGame; };
};

class HangmanView {
private:
	char** stand = new char* [6];

public:
	HangmanView();
	void displayCurrentProgress();
	string displayUsedLetter(HangmanModel vModel);
	void displayHangman();
	void updateHangmanStand(int lives);
	void setStand(char** stand) { this->stand = stand; };
	char** getStand() { return stand; };

};

class HangmanController {
public:
	char userEntry();
	void checkLetter(HangmanModel& hModel, HangmanView& vModel, char letter);
	void updateLives(HangmanModel& cModel);
	bool checkIfGameIsOver(HangmanModel& cModel);
};

#endif
