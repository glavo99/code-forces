#include <iostream>

int main()
{
    int y;
    std::cin >> y; // 1000 - 9000
    while(true){
        y++;
        int i = y / 1000;
        int j = y / 100 % 10;
        int k = y / 10 % 10;
        int l = y % 10;
        if(i != j && i != k && i != l && j != k && j != l && k != l)
            break;
    }
    std::cout << y << std::endl;
    return 0;
}