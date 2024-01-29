#include <string>
#include <iostream>
#include <vector>
#include <random>
using namespace std;

vector<string> words{"coconut", "cocoon", "coffin", "coin", "concoct", "concoction", "confit", "conic", "cotton", "count", "fiction", "finito", "font", "function", 
"futon", "icon", "iconic", "info", "into", "intuit", "intuition", "ionic", "nonfiction", "noon", "notion", "noun", "onion", "onto", "tinct", "tint", "tonic", "toon", 
"tuition", "tunic", "uncuff", "uncut", "unfit", "union", "unit", "unto"};

vector<string> letters{"F", "U", "N", "C", "T", "I", "O", "N"};

int score = 0;
int total = 0;

for(int i = 0; i < words.size(); i++){
    total += words[i].size();
}

void display(){
    for(int i = 0; i < letters.size(); i++){
        cout << letters[i] < "   ";
    }
}

void shuffle(){
    //shuffles the letters and represents them
    int size = letters.size();
    for(int i = 0; i < size - 1; i++) {
        int j = i + rand() % (size - i);
        swap(letters[i], letters[j]);
    }
    cout <<"Elements after getting shuffled"<< endl;

    for(int i = 0 ; i < size; i++){
        cout << letters[i] << "   ";
    }
}

void check(){
    string ans;
    cin >> ans;
    int check = 0;
    for(int i = 0; i < words.size(); i++){
        if(ans == words[i]){
            cout << "Word in list!" << endl;
            score += words[i].size();
            check = 1;
        }
    }
    if(check == 0){
        cout << "Word not in list" << endl;
    }
}

