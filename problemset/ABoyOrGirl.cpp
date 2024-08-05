#include <iostream>

int main()
{
    int count = 0;
    std::string s1, s2;
    std::cin >> s1;
    for (int i = 0; i < s1.length(); i++){
        if(count == 0){
            s2 = s1[i];
            count++;
        }
        else{
        for(int k = 0; k < count; k++)
        {
            if(s2[k] == s1[i])
            {
                break;
            }else{
                if(k == count - 1){
                    s2 += s1[i];
                    count++;
                }
            }
        }
        }
    }
    if(count % 2 == 0){
        std::cout << "CHAT WITH HER!" << std::endl;
    }
    else{
        std::cout << "IGNORE HIM!" << std::endl;
    }
    return 0;
}