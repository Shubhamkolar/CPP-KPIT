#include <iostream>

#include <Department.h>

class Student
{
private:
    int _roll_number;
    std::string _name;
    float _fees;
    char _grade;
    Department _dept; // IT ,CS , AI_ML

public:
    Student() = default; // default constructor will be created
    Student(
        int rnum, std::string name, float fees, char grade, Department Department)
    {
        this->_name = name;
        this->_fees = fees;
        this->_roll_number = rnum;
        this->_grade = grade;
        this->_dept = dept;
    }
    ~Student() { // destructor 
        std::cout << "Student with roll number: "
                  << this->_roll_number
                  << " is now destroyed\n";
    }

    int main(){
        // stack
        Student s1(101, "shubham", 89999.0f, 'A', Department::CS);
        Student s3(103, "shubham", 77776.0f, 'B', Department::AI_ML);

        // heap
        // *s2 ka type "Student pointer"
        Student* s2 = new Student(202, "Gyan", 898998.0f, 'A', Department::IT);
        Student *s4 = new Student(204, "Ajay", 8768.0f, 'C', Department::AI_ML);
        delete s2;
        delete s4;

        Student arr[2] = {s1, s3}; //array of stack allocated student objects
        Student *heapArr[2] = {s2, s4};

        // Student* temp[2] = {s2, s4};this will throw an error since both the datatyeps are different
        
    }
};