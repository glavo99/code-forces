#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int count = 0;
    std::string s1;
    std::cin >> s1;
    for(int i = 0; i < s1.length(); i++)
    {
        if(s1[i] > 96){
            count++;
        }else{
            count--;
        }
    }
    if(count >= 0){
        std::transform(s1.begin(), s1.end(), s1.begin(), tolower);
    }else{
        std::transform(s1.begin(), s1.end(), s1.begin(), toupper);
    }
    std::cout << s1 << std::endl;
    return 0;
}