#include <iostream>

int main()
{

    int int_var{43};
    int *p_int{&int_var}; // The address of operator (&);

    std::cout << "Int var : " << int_var << "\n";
    std::cout << "p_int (Address in memory) : " << p_int << "\n";

    // You can also change the address stored in a pointer any time
    int int_var1 = 65;
    p_int = &int_var1; // Assign a different address to the pointer
    std::cout << "p_int (with different address) : " << p_int << "\n";

}