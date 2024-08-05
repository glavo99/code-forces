#include <iostream>
using namespace std;

int main(){
    int a, b, c, min, max;

    cin >> a >> b >> c;
    if(a >= b && a >= c){
        max = a;
        if(b > c){
            min = c;
        }else{
            min = b;
        }
    }else if(b >= c && b >= a){
        max = b;
        if(c > a){
            min = a;
        }else{
            min = c;
        }
    }else{
        max = c;
        if(a > b){
            min = b;
        }else{
            min = a;
        }
    }
    cout << min << " " << max << endl;
    return 0;
}