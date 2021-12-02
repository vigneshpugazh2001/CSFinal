#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

int countLine(string word);
int countChar(string word);

int main(int argc, char const *argv[]) {
    if(argc <= 2 || argc >=2){
    string name;
    cout << "enter word" << endl;
    getline(cin, name);
    countLine(name);
    countChar(name);
    }
}

int countLine(string word){
    int count = 0;
    for(size_t i = 0; i < word.size(); i++){
        if(word[i] == '.' || word[i] == '?' || word[i] == '!'){
            count++;
        }
    }
    cout << "Your line count is: " << count << endl;
}

int countChar(string word){
    int count = 0;
    for(size_t i = 0; i < word.size(); i++){
        count++;
    }
cout << "Your character count is: " << count << endl;
}