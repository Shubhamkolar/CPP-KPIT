#include<iostream>

class Student
{
private:
    int _id;
    std::string _name;
public:
    Student(int id, std::string name){
        this-> _id = id;
        this-> _name = name;
    }
    ~Student(){}
};

class Engineer : public Student
{
    private:
        std::string _course_name;
    public:
    Engineer(int id, std::string name, std::string cname)
    : Student(id, name) {
        this->_course_name;  // my part is done
    }
    ~Engineer(){}
};

int main(){
    Engineer* e1 = new Engineer(101, "shubham", "BTech: CS");
    Student* c1 = new Student(102, "Gyan");

// Here we need to store something common
    Student* arr[2] = {e1, c1};  //e1 is a student, c1 is a student
    // here we are doing upcasting
}

/*
    Fruit Seller: Apples were sold to the customer

    customer A) There is a new fruit seller inthe market.
    customer B) There is a appler seller in the market.

    "is-A relationship"


*/
