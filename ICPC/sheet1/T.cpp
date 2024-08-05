#include <iostream>
using namespace std;

int main(){
    int a, b, c, min, max, mid;

    cin >> a >> b >> c;
    if(a >= b && a >= c){
        max = a;
        if(b > c){
            min = c;
            mid = b;
        }else{
            min = b;
            mid = c;
        }
    }else if(b >= c && b >= a){
        max = b;
        if(c > a){
            min = a;
            mid = c;
        }else{
            min = c;
            mid = a;
        }
    }else{
        max = c;
        if(a > b){
            min = b;
            mid = a;
        }else{
            min = a;
            mid = b;
        }
    }
    cout << min << endl << mid << endl << max << endl << endl;
    cout << a << endl << b << endl << c << endl;
    return 0;
}