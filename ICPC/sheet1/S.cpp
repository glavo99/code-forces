#include <iostream>
using namespace std;

int main(){
    float f;

    cin >> f;
    if(f >= 0 && f <= 25){
        cout << "Interval [0,25]" << endl;
    }else if(f > 25 && f <= 50){
        cout << "Interval (25,50]" << endl;
    }else if(f > 50 && f <= 75){
        cout << "Interval (50,75]" << endl;
    }else if(f > 75 && f <= 100){
        cout << "Interval (75,100]" << endl;
    }else{
        cout << "Out of Intervals" << endl;
    }
    return 0;
}