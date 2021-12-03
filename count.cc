#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

/**
 *   @file: count.cc
 * @author: Vignesh Pugazhenthi
 *   @date: 12/2/2021
 *  @brief: This program counts lines and characters the user inputs
 */


/**
 * @brief: This function counts the number of sentences the user inputs
 * @param: The parameter used is a string
 * @return: Returns an integer of the amount of lines are shown
 */
int countLine(string word);

/**
 * @brief: This function counts the number of characters the user inputs
 * @param: The parameter used is a string
 * @return: Returns an integer of the amount of characters that are shown
 */
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