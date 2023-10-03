#include "Functionalities.h"
#include "Vehicle.h"
#include "CarType.h"
#include "Car.h"

void CreateObjects(Car *arr[3])
{
    // container's 0 index now holds the address of this object on the heap
    arr[0] = new Car("v101", "HONDA", 78000.0f, VehicleType::CAR, CarType::SEDAN );
    arr[1] = new Car("v102", "TATA", 178000.0f, VehicleType::CAR, CarType::SUV );
    arr[2] = new Car("v103", "MARUTI", 80000.0f, VehicleType::CAR, CarType::HATCHBACK );
}

float AveragePrice(Car *arr[3])
{
    float total = 0.0f;

    for(int i=0; i<3; i++){
        // total is previous total addd with price value taken from address at i position
        total += ( arr[i] )->price();  // "-> means jumping i.e. it will get the value"
        // get the address, jump to the addrsss, and then call it 
    }

    return total/3;
}


void CallCalculateTax(Car *arr[3])
{
    for(int i=0; i<3; i++){
        std::cout << "Tax is: " << (arr[i])->CalculateTax() <<'\n';
    }
}

void FreeMemory(Car *arr[3]){
    for(int i=0; i<3; i++){
        delete arr[i];
    }
}
