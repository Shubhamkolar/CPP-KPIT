#include<iostream>
#include "Car.h"



Car::Car(std::string id, std::string brand, float price, VehicleType type, CarType _car_type)
 :Vehicle(id, brand, type, price), _car_type(_car_type) 
{
}

Car::Car(std::string id, std::string brand, VehicleType type, CarType cType)
    : Vehicle(id, brand, type), _car_type(cType)
{
    
}

float Car::CalculateTax()
{
    return 0.1f * price();    
}

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _car_type: " << DisplayEnum2(rhs._car_type);
    return os;
}

std::string DisplayEnum2(const CarType value)
{
    if(value == CarType::HATCHBACK){
        return "HATCHBACK";
    } else if(value == CarType::SEDAN){
        return "SEDAN";
    } else{
        return "SUV";
    }
}
