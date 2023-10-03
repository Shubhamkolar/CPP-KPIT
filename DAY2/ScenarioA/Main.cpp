#include "vehicle.h"
#include "type.h"

#include "Functionalities.h"

/*
    A) Developer makes a container of objects. Container is copied when create object is called from 
    CreateObject function to main function.

    B) user creates an empty container, User 

*/

int main(){
    Vehicle* arr[3];

    CreateObjects(arr);
    std::cout << "Average price: " << AveragePrice(arr);
}