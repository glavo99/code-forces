#include <iostream>

int main()
{
    int i, count = 0;

    std::cin >> i;
    while(i >= 5){
        count++;
        i -= 5;
    }
    if(i > 0 && i < 5){
        count++;
    }
    std::cout << count << std::endl;
    return 0;
}