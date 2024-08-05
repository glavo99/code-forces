#include <iostream>
#include <string>

int main()
{
    std::string s1;
    std::cin >> s1;
    s1[0] = toupper(s1[0]);
    std::cout << s1 << std::endl;
    return 0;
}