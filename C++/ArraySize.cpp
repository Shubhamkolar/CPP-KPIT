#include <iostream>

int main(){

    int scores[] = {10, 11, 34, 66, 88, 89};
    int count {sizeof(scores)/sizeof(scores[0])};
 
// ---------index based for loop------------
// If you need index as well then use this for loop
    for(int i=0; i < count; i++){
        // std::cout << "scores " << i << " : " << scores[i] << "\n";
    }

// --------Range based for loop------
// If you don't need the index and need only the values then use this 
    for( auto i : scores){
        // std::cout << "value : " << i << "\n";
    }


//----------------Array of Characters--------------------------------------------

    char message [] {'H', 'e', 'l', 'l', 'o'};
    std::cout << "message : " << message << "\n";


    return 0;
}