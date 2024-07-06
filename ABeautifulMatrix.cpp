#include <iostream>

int main ()
{
    int i[5][5];
    int row = 0, column = 0;
    int n = 0;
    for (int j = 0; j < 5; j++)
    {
        for(int k = 0; k < 5; k++){
            std::cin >> i[j][k];
            if( i[j][k] == 1){
                row = j + 1;
                column = k + 1;
            }
        }
    }
    while(row > 3){
        row --;
        n ++;
    }
    while(row < 3){
        row ++;
        n ++;
    }
    while(column > 3){
        column --;
        n ++;
    }
    while(column < 3){
        column ++;
        n ++;
    }
    std::cout << n << std::endl;
    return 0;
}