#include <iostream>
using namespace std;

int main(){
    int i;

    cin >> i;
    i /= 1000;
    if(i % 2 == 0){
        cout << "EVEN" << endl;
    }else{
        cout << "ODD" << endl;
    }
    return 0;
}