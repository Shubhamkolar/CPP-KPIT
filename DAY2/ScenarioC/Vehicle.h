#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include "VehicleType.h"

class Vehicle
{

private:
    std::string _id;
    std::string _brand;
    VehicleType _type;
    float _price;

public:

    Vehicle(
    std::string id,
    std::string brand,
    VehicleType type,
    float price
    );

    Vehicle(
    std::string id,
    std::string brand,
    VehicleType type
    );

    // default copy constructor
    // i will not write the body for default constructor compiler should generate it automatically.
    Vehicle(const Vehicle& obj) = default;

    virtual float CalculateTax() = 0; //pure virtual function (known as abstract method in java)

    virtual ~Vehicle(){
        std::cout << "Object with ID: " << _id << " is destroyed\n";
    }

    std::string id() const {return _id;}

    std::string brand() const { return _brand;}

    VehicleType type() const { return _type;}

    float price() const { return _price;}

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);


    
};

/*
    It takes one enum value and prints its string form 
    BASED ON THE LOGIC WRITTEN INSIDE 

*/

std::string DisplayEnum(const VehicleType value);




#endif // VEHICLE_H
