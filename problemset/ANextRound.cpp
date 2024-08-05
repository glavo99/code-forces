#include <iostream>

int main()
{
    // k place , n number of participants
    // n >= k
    int n, k, j, o = 0;
    int special = 0;
    std::cin >> n >> k;
    // n = 8, k = 5
    for(int i = 0; i < n ; i++){
        std::cin >> j;
        if(special && special == j){
            o++;
        }else if(i == k - 1 && j != 0){
            special = j;
            o++;
        }else if(i < k - 1 && j != 0){
            o++;
        }
    }
    std::cout << o << std::endl;
    return 0;
}