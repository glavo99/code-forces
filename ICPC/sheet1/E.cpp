#include <iostream>
#define pie  3.141592653
#include<iomanip>
using namespace std;

int main(){
    double r;
    cin >> r;
    cout << setprecision(11) << pie * (r * r) << endl;
    return 0;
}