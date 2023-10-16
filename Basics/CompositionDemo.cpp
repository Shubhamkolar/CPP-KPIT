/*
    Composition:
    Class A is made by using class B in such a way that 
    class B cannot exist independently but class A has its own existence

    Composition is not a feature of OOP its a general feature.
*/

#include<iostream>

class DebitCard{
    private:
        int _cvv_number;
        std::string _card_number;
    public:
        DebitCard(int cvv, std::string number)
        : _cvv_number(cvv), _card_number(number)
        {
            // this->_card_number = number;
            // this->_cvv_number = cvv;
        }
        ~DebitCard(){
            std::cout << "debit card destroyed\n";
        }
};


class Account
{
    private: 
        DebitCard* obj;  //DebitCard*, DebitCard&
        std::string _name;

    public:
        Account(DebitCard* card, std::string name)        //---LHS is already written here
        : obj(card), _name(name)  // datamember()         //                        
        {                                                 //                        
            // this->obj = card;                          //    
            // this->_name = name;                        //
        }                                                 //
                                                          // 
        ~Account(){} 
        friend std::ostream &operator<<(std::ostream &os, const Account &rhs) {
            os << "obj: " << rhs.obj
               << " _name: " << rhs._name;
            return os;
        }
                                                          //
};                                                        //
                                                          //
int main(){  
    // method 1                                           //
    Account* ac1 = new Account(                           //
         new DebitCard(781, "4314 56"),                   //---RHS is written here so no need to write LHS again 
         "Shubham"
    );
    std::cout <<*ac1;

    //method 2  (DON'T USE THIS MTD since acc. the defination it cannot exist independently) 
    DebitCard* db = new DebitCard(201, "7231 12");
    Account* ac2 = new Account(db, "Gyan");
}

/*
    int n1 = 10;  // stack(automatic storage)
    int *n1 = new int(10);  //heap

    int& n2 = n1; // n2 is a reference to n1(alias)

    //card is a stack-allocated DebitCard insatance
    DebitCard card;  // stack (automatic storage)

    // card is a DebitCArd pointer to a heap allocated DebitCard instance
    DebitCard* card = new DebitCard();  // heap

    DebitCard& c1 = card; //c1 is an alternate name for card


    // let's not worry about this!  (MODERN CPP)    
    DebitCard&& c1 = std::move(card) ; //c1 is a rvalue reference of card

*/