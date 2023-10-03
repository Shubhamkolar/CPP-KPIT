#include "Vehicle.h"
#include "VehicleType.h"
#include <iostream>

Vehicle::Vehicle(std::string id, std::string brand, VehicleType type, float price
)
:_id(id), _brand(brand), _price(price), _type(type)
{

}

Vehicle::Vehicle(std::string id, std::string brand, VehicleType type)
:_id(id), _brand(brand), _type(type)
{
    
}
