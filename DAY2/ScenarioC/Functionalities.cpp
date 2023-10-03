#include "Functionalities.h"
#include "Vehicle.h"
#include "CarType.h"
#include "Car.h"
#include "VehicleType.h"
#include "Bike.h"
#include "BikeType.h"

void CreateObjects(Vehicle* garage[3])
{
    // container's 0 index now holds the address of this object on the heap
    garage[0] = new Car("v101", "HONDA", 78000.0f, VehicleType::CAR, CarType::SEDAN);
    garage[1] = new Bike("bk111","Bajaj", VehicleType::BIKE, 31.0f, 33.3f ,BikeType::SPORTS);
    garage[2] = new Car("v103", "MARUTI", 80000.0f, VehicleType::CAR, CarType::HATCHBACK);

    for(int i=0; i<3; i++){
        std::cout << *(garage[i]) << "\n";
    }
}

float AveragePrice(Vehicle* garage[3])
{
    float total = 0.0f;

    for(int i=0; i<3; i++){
        // total is previous total addd with price value taken from address at i position
        total += ( garage[i] )->price();  // "-> means jumping i.e. it will get the value"
        // get the address, jump to the addrsss, and then call it 
    }

    return total/3;
}


void CallCalculateTax(Vehicle* garage[3])
{
    for(int i=0; i<3; i++){
        std::cout << "Tax is: " << (garage[i])->CalculateTax() <<'\n';
    }
}

void FreeMemory(Vehicle *garage[3]){
    for(int i=0; i<3; i++){
        delete garage[i];
    }
}
