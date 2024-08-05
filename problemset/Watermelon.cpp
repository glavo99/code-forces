#include <iostream>

int main()
{
    int num = 0;
    std::cin >> num;
    if (num > 2 && num % 2 == 0)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}