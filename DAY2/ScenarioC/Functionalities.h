#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Car.h"
#include "Bike.h"
#include "Vehicle.h"

/*
    This function shoudl create objects on heap and store their pointers in the array
*/
void CreateObjects(Vehicle* garage[3]);

/*
    Average price for all cars
*/
float AveragePrice(Vehicle* garage[3]);


/*
    Demo of calculateTax
*/

void CallCalculateTax(Vehicle* garage[3]);

// delete all the memory

void FreeMemory(Vehicle* garage[3]);

#endif // FUNCTIONALITIES_H
