#include <iostream>
#include <vector>
#include "spellingBee.h"
using namespace std;

int main(){
 getTotal();

    cout << "Welcome to Spelling Bee, a completely original game created by Sahana Kumar that has in no way been ripped off by the NYT." << endl;
    cout << "Here are your letters:" << endl;
    shuffle();
    display();
    cout << endl << endl;
    cout << "You can either ask for instructions (press 1), shuffle (press 2), enter a guess (press 3), or see what your current level is (press 4)" << endl;


    bool finished = false;
 while(!finished){
     cout << endl;
    cout << "Please input a number: " << endl;
    cout << endl;

    int input;
    cin >> input;
    
    switch (input){
        case 1:{ //instructions
            cout << "Here's how to play Spelling Bee" << endl;
            cout << "Construct as many words as you can using at least 4 letters, including the center letter of the puzzle." << endl;
            cout << "Words should be at least 4 letters (no maximum limit)" << endl;
            cout << "Each Spelling Bee puzzle is curated to focus on relatively common words (with a few tougher ones periodically to keep things challenging)." << endl;
        }

        case 2:{ //shuffle
            cout << "Shuffling letters!" << endl;
            shuffle();
            display();
            break;
        } 
        
        case 3: { //guess
            cout << "Please enter your guess" << endl;
            string guess;
            cin >> guess;
            check(guess);
        }

        case 4:{ //currentLevel
            cout << "There are 5 levels total. Your level is: " << endl;
            currentLevel();
        }   
    }
 }
 
}