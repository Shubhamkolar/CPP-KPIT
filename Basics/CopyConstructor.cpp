#include <iostream>

class Hero{

// properties
public:
    char level;
    int health;


Hero(){
    std::cout<<"simple constructor called" << std::endl;
}

// parameterised constructor
Hero(int health, char level){
    this ->health = health;
    this ->level = level;
}

// Parameterized constructor
Hero(int health){
    this -> health = health;
}


// copy constructor
Hero(Hero& temp){   
    std::cout<<"copy constructor called"<<std::endl;
    this ->health = temp.health;
    this ->level = temp.level;
}

void print(){
    std::cout << "level " <<this -> level << std::endl;
    std::cout << "health "<<this -> health << std::endl;
}



};

int main(){

    Hero suresh(70, 'a');
    suresh.print();

    // Rithesh.health = suresh.health;
    // Rithesh.level = suresh.level;
    // This both can be done using copy constructor as below
    Hero Ritesh(suresh);
    Ritesh.print();
}