#include <iostream>
using namespace std;

int main(){
    int a, b , c, d;

    cin >> a >> b >> c >> d;
    if(max(c, a) > min(b, d)){
        cout << -1 << endl;
    }else{
        cout << max(a, c) << " " << min(b, d) << endl;
    }
    return 0;
}