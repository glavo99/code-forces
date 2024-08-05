#include <iostream>
using namespace std;

int main(){
    int i, j;

    cin >> i >> j;
    if(i % j == 0 || j % i == 0){
        cout << "Multiples" << endl;
    }else{
        cout << "No Multiples" << endl;
    }
    return 0;
}