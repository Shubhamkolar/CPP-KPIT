#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "type.h"

class Vehicle
{
    private:
        std::string _id;
        std::string _brand;
        Type _type;
        float _price;
    public:
        Vehicle(
            std::string id,
            std::string brand,
            Type type,
            float price
            );

        Vehicle(
            std::string id, 
            std::string brand,
            Type type
        );

        // defaulter copy constructor
        // I will not write the body of copy constructor. Compiler should generate a default
        // version of it during compilation
        Vehicle(const Vehicle& ) = default;  // shallow copy

// The below code will be working same as the above code its use in java
/*
        Vehicle(const Vehicle& obj){
            this->_id = obj._id;
            this->_brand = obj._brand;
            this->_price = obj._price;
            this->_type = obj._type;
        }
*/


        ~Vehicle(){
            std::cout << "Vehicle with id : " << _id << " id destroyed";
        }

        std::string id() const { return _id; }

        std::string brand() const { return _brand; }

        Type type() const { return _type; }

        float price() const { return _price; }
};

#endif // VEHICLE_H
