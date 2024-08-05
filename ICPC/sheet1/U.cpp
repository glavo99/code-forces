#include <iostream>
using namespace std;

int main (){
    double f, i;
    int x;

    cin >> f;
    x = f / 1;
    i = f - x;
    if(i > 0){
        cout << "float " << x << " " << i << endl;
    }else{
        cout << "int " << x << endl;
    }
    return 0;
}