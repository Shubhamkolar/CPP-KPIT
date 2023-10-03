#include "Functionalities.h"
#include "vehicle.h"
#include "type.h"

void CreateObjects(Vehicle *container[3])
{
    // container's 0 index now holds the address of this object on the heap
    container[0] = new Vehicle("v101", "Maruti", Type::CAR, 870000.0f);
    container[1] = new Vehicle("v102", "Honda", Type::CAR, 970000.0f);
    container[2] = new Vehicle("v103", "Toyota", Type::CAR, 12870000.0f);
    

}


/*
    looop over all location of the array
    For each location's pointer 
        access _price attribute
        add it total

    divide total by 3 and return
*/
float AveragePrice(Vehicle *container[3])
{
    float total = 0.0f;

    for(int i=0; i<3; i++){
        // total is previous total addd with price value taken from address at i position
        total += ( container[i] )->price();  // "-> means jumping i.e. it will get the value"
        // get the address, jump to the addrsss, and then call it 
    }

    return total/3;
}
