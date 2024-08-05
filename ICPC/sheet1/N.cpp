#include <iostream>
using namespace std;

int main(){
    char c;

    cin >> c;
    if(c > 96){
        c -= 32;
        cout << c << endl;
    }else{
        c += 32;
        cout << c << endl;
    }
    return 0;
}