#include <iostream>
using namespace std;

int main(){
    int i, j;

    cin >> i >> j;
    float k = ((float) i / j) * 10;
    int l = (int) k % 10;
    cout << "floor " << i << " / " << j << " = " << i / j << endl;
    if(i % j == 0){
        cout << "ceil " << i << " / " << j << " = " << i / j << endl;
    }else{
        cout << "ceil " << i << " / " << j << " = " << (i / j) + 1 << endl;
    }
    if(l == 0){
        cout << "round " << i << " / " << j << " = " << i / j << endl;
    }else if(l >= 5){
        cout << "round " << i << " / " << j << " = " << (i / j) + 1 << endl;
    }else{
        cout << "round " << i << " / " << j << " = " << i / j << endl;
    }
    return 0;
}