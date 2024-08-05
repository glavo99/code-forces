#include <iostream>

int main(){
    int t, a, b;
    std::cin >> t;
    while(t){
        int num = 0;
        std::cin >> a >> b;
        if(a % b == 0){
            std::cout << num << std::endl;
        }else{
            num = a % b;
            std::cout << b - num << std::endl;
        }
        t--;
    }
    return 0;
}