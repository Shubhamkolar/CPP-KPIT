#include <iostream>

int main()
{

    int n1 = 10;
    int *ptr = &n1;
    int **Sptr = &ptr;

    // data inside n1
    std::cout << "Data inside n1: " << n1 << "\n";

    // data inside Sptr
    std::cout << "Data inside Sptr" << Sptr << "\n";

    // jump ptr 1 time
    std::cout << "Jump ptr 1 time: " << *ptr << "\n";

    // jump Sptr 2 times
    std::cout << "Double ** jump sptr: " << **Sptr << "\n";

    // address of n1
    std::cout << "Address of n1: " << &n1 << "\n";

    // address of pt
    std::cout << "Address of ptr: " << &ptr << "\n";

    // address of Sptr
    std::cout << "Address of sptr: " << &Sptr;
}