#include <iostream>

int main()
{
    int i, o, p, q, count = 0;
    std::cin >> i;
    for(;i > 0; i--){
        std::cin >> o >> p >> q;
        if (o + p + q > 1)
            count++;
    }
    std::cout << count << std::endl;
    return 0;
}