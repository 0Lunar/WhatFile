#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    if(argc < 3){
        cout << "usage: WhatFile <filename> <how many times to overwrite the file>";
        return 0;
    }
    char c;
    ifstream text(argv[1]);
    text.get(c);
    if(c){
        int numloop = stoi(argv[2]);
        string fin;
        string letters[84] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "!", "£", "$", "%", "/", " ", "(", ")", "=", "?", "^", "ì", "è", "*", "+", "é", "[", "]", "@", "ç", "ò", "#", "ù", "§", ";", ",", ":", ".", "-", "_", "<", ">"};
        srand(time(0));
        for(int i = 0; i < numloop; i++){
            int num = rand()%84;
            fin += letters[num];
        }
        ofstream file(argv[1]);
        for(int l = 0; l < numloop; l++){
            file << fin;
        }
        file.close();
    }
    else{
        cout << argv[1] << " doesn't exist or is empty";
        return 0;
    }
}