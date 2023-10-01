#include <iostream>

int main(){

    // Declare an array of input
    int scores [10]; // junk data

    // Read data
    // std::cout << "scores [0] : " << scores[0]  << "\n";
    // std::cout << "scores [1] : " << scores[1]  << "\n";

    // Read with a random value(garbage values) loop
    /*
    for(int i{0}; i<10; i++){
        std::cout << "scores [" << i << "] : " << scores[i] << "\n";
    }
    

    // Write data into an array
    scores[0] =  24;
    scores[1] = 21;
    scores[2] = 22;

    for(int i{0}; i < 10; i++){
        std::cout << "scores [" << i << "] :" << scores[i] << "\n";
    }
    */

/*
// omit the size of the array at declaration

   double salaries[] = {12.3, 53.4, 55.6, 65.6};
   for(size_t i{0}; i<4; i++){
    std::cout << "salary[" << i << "] : " << salaries[i] << "\n";
   }
*/
 
    int score[] = {2, 3, 4, 5, 6, 7 ,8};
    int sum {0};

    for(int element : score){
        sum += element;
    }
    std::cout << "Score sum : " << sum << "\n";


    return 0;
}