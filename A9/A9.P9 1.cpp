/*
    CH-230-A
    a9.p9.cpp
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
using namespace std;

//replacing vowels in words with _
void replaced_word(string s) {
    for (int i = 0; i < (int)s.length(); i++) {
        if (strchr("aeiouAEIOU", s[i]) == 0) {
            cout << s[i];
        } else {
            cout << '_';
        }
    }
    cout << endl;
}

int main() {
    int i, tries, random;
    string guess;
    string answer = "yes"; 
    string s[17] = {"computer", "television", "keyboard", "laptop",
    "mouse"};

    cout << "Please enter 12 words so we can start the game!" << endl;
    for (i = 5; i < 17; i++) {
        getline(cin, s[i]);
    }
   //generating randomly a word to guess
    srand(static_cast<unsigned int>(time(0)));

    while (answer != "quit") { 
        random = rand() % 17;
        string aux = s[random];//choosing randomly
        cout << "Word to guess: " << endl;
        replaced_word(aux);

        cout << "You guessed the word: ";
        cin >> guess;
        tries = 1;
     //if the word is different than the original one
     //try again
        while (guess != aux) {
            cout << "Wrong! Try again!\n";
            cout << "You guessed the word: ";
            cin >> guess;
            tries++;
        }

        cout << "Your number of tries: " << tries << endl;
        cout << "Would you like to play again? :) Press 'quit' if no\n";
        cin >> answer;
    }

    return 0;
}
