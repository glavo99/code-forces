#include <iostream>
void swap(int arr[], int one, int two);
int main()
{
    int j = 0, out, in;
    std::string s1;
    std::cin >> s1;
    int k[100];
    for(int i = 0; i < s1.length(); i++ ){
        if(s1[i] != '+'){
            k[j] = s1[i] - '0';
            j++;
        }
    }
    for (out = j; out > 1; out --){
        for(in = 0; in < out; in++){
            if(k[in]> k[in+1]){
                swap(k, in, in+1);
            }
        }
    } //end bubble sort
    for (int r = 0; r < j; ++r) {
        std::cout << k[r];
        if(r != j - 1){
            std::cout << '+';
        }
    }
    std::cout << std::endl;
    return 0;
}
void swap(int arr[], int one, int two){
        int temp = arr[one];
        arr[one] = arr[two];
        arr[two] = temp;
}