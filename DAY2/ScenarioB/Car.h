#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include "CarType.h"
#include "VehicleType.h"

class Car : public Vehicle
{
    private:
        CarType _car_type;
    
    public: 
        // 4 + 1
        Car(std::string id, std::string brand, float price, VehicleType type, CarType _car_type);
        

        // 3 + 1
        Car(std::string id, std::string brand, VehicleType type, CarType _car_type);
        
        float CalculateTax()    override;

        ~Car(){
            //callling getter since private property of parent cannot be accessed in child
            std::cout << "car part of vehicle with ID: " << id() << " is destroyed\n";
        }

        CarType carType() const { return _car_type; }
};
#endif // CAR_H
