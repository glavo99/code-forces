#include <iostream>
using namespace std;

int main (){
    char c;
    cin >> c;

    if(c > 47 && c < 58){
        cout << "IS DIGIT" << endl;
    }else if(c > 64 && c < 91){
        cout << "ALPHA" << endl << "IS CAPITAL" << endl;
    }else if(c > 96 && c < 123){
        cout << "ALPHA" << endl << "IS SMALL" << endl;
    }
    return 0;
}