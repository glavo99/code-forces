#include <iostream>

int main()
{
    int i = 0;
    std::string s;
    std::cin >> i;
    for(;i > 0; i--){
        std::cin >> s;
        if(s.length() > 10){
            std::cout << s[0] << s.length() - 2 << s[s.length() - 1] << std::endl;
        }else{
            std::cout << s << std::endl;
        }
    }
    return 0;
}