#include <string>
#include <iostream>
#include <vector>
#include "spellingBee.h"
using namespace std;

std::vector<string> words = {"coconut", "notion", "cocoon", "coffin", "coin", "concoct", "concoction", "confit", "conic", "cotton", "count", "fiction", "finito", "font", "function", "futon", "icon", "iconic", "info", "into", "intuit", "intuition", "ionic", "nonfiction", "noon", "notion", "noun", "onion", "onto", "tinct", "tint", "tonic", "toon", "tuition", "tunic", "uncuff", "uncut", "unfit", "union", "unit", "unto"};
vector<string> letters = {"F", "U", "N", "C", "T", "I", "O", "N"};

int score = 0;
int total = 0;

int getTotal(){
    for(int i = 0; i < words.size(); i++){
        total += words[i].size();
    }
    return total;
}

void display(){
    for(int i = 0; i < letters.size(); i++){
        cout << letters[i] << "   ";
    }
}

void displayScore(){
    cout << "Overall score is: " << score;
}

void shuffle(){
    //shuffles the letters and represents them
    int size = letters.size();
    for(int i = 0; i < size - 1; i++) {
        int j = i + rand() % (size - i);
        swap(letters[i], letters[j]);
    }
    cout <<"Elements after getting shuffled:"<< endl;
    cout << endl;
}

void check(string g){
    int check = 0;
    for(int i = 0; i < words.size(); i++){
        if(g == words[i]){
            cout << "Word in list!" << endl;
            score += words[i].size();
            check = 1;
            displayScore();
        }
    }
    if(check == 0){
        cout << "Word not in list" << endl;
    }
}

string currentLevel(){
    string ans;
    int levelZero = 0;
    int levelOne = 0.2*getTotal();
    int levelTwo = 0.4*getTotal();
    int levelThree = 0.6*getTotal();
    int levelFour = 0.8*getTotal();
    int levelFive = getTotal();

    if(score >= levelZero || score < levelOne){
        ans = "Level Zero";
    }
    
    if(score > levelOne || score < levelTwo){
        ans = "Level One";
    }

    if(score > levelTwo || score < levelThree){
        ans = "Level Two";
    }

    if(score > levelThree || score < levelFour){
        ans = "Level Four";
    }

    if(score > levelFour || score <= levelFive){
        ans = "Level Five";
    }
    return ans;
}

