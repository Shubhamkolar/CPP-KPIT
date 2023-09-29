#include <iostream>

/*
    0x100H....


*/

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    std::cout
        << "content of arr: (addrss of first location)"
        << arr
        << "\n";

    std::cout
        << "address of first location: "
        << (arr + 0) // 0x100H + 0*4 = 0x100H
        << "\n";

    std::cout
        << "content inside first location: "
        << *(arr + 0)
        << "\n";
}