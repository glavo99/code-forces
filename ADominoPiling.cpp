#include <iostream>

int main ()
{
    int m, n;
    std::cin >> m >> n;
    int a = m * n;
    int aDomino = 2;
    int i = a / aDomino;
    std::cout << i << std::endl;
    return 0;
}