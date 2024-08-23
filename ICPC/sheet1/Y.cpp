#include <iostream>
using namespace std;

int main(){
    long long a, b, c, d, mult;

    cin >> a >> b >> c >> d;
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    mult = (a * b * c * d) % 100;
    if(mult < 10){
        cout << 0 << mult << endl;
    }else{
        cout << mult << endl;
    }
    return 0;
}