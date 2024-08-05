#include <iostream>

int main()
{
    long long n, m, a;
    std::cin >> n >> m >> a;
    long long length = n / a;
    long long width = m / a;
    if(n % a != 0)
        length++;
    if(m % a != 0)
        width++;
    std::cout << length * width << std::endl;
    return 0;
}