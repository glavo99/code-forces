#include <iostream>

int main()
{
    int n, x = 0;
    std::string s;
    std::cin >> n;
    while(n > 0){
        std::cin >> s;
        if(s[1] == '+'){
            x++;
        }else{
            x--;
        }
        n--;
    }
    std::cout << x << std::endl;
    return 0;
}