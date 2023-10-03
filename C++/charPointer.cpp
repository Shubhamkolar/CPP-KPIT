#include <iostream>

int main(){
    char ch[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char arr[6] = "Hello";
    
    std::cout << ch[1] << std::endl;
    std::cout << arr[6] << std::endl;
}