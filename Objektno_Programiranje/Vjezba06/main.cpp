#include "hangman.h"
#include <iostream>
#include <fstream>
#include <string>
using std::string;
using namespace std;

int main() {
   HangmanModel m;
   HangmanController c;
   HangmanView v;

   cout << "Film je: " << m.getMovie() << endl;

   while ((c.checkIfGameIsOver(m) != true) && (m.getMovie() != m.getGuessMovie())) {
       cout << "Pogodena slova: " << m.getGuessMovie() << endl;
       c.checkLetter(m, v, c.userEntry());
       cout << v.displayUsedLetter(m) << endl;
       v.displayCurrentProgress();
   }

   c.checkIfGameIsOver(m) ? cout << "Izgubili ste!" << endl : cout << "Pobjedili ste!" << endl;

}
