#include <iostream>
using namespace std;

int main(){
    int x, year = 0, month = 0;

    cin >> x;
    if(x >= 365){
        year = x / 365;
        x = x - (365 * year);
    }
    if(x >= 30){
        month = x / 30;
        x -= (30 * month);
    }
    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << x << " days" << endl;
    return 0;
}