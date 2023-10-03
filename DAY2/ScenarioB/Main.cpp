#include <iostream>
#include "Car.h"
#include "Vehicle.h"
#include "VehicleType.h"
#include "Functionalities.h"

int main(){
    // 3 locations reserved; each location can store 8 bytes(address)
    Car* arr[3];

    CreateObjects(arr);
    std::cout << "Average Price: " << AveragePrice(arr) << "\n";

    CallCalculateTax(arr);

    FreeMemory(arr);
}