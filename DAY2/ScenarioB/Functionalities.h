#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Car.h"

/*
    This function shoudl create objects on heap and store their pointers in the array
*/
void CreateObjects(Car* arr[3]);

/*
    Average price for all cars
*/
float AveragePrice(Car* arr[3]);


/*
    Demo of calculateTax
*/

void CallCalculateTax(Car* arr[3]);

// delete all the memory

void FreeMemory(Car* arr[3]);

#endif // FUNCTIONALITIES_H
