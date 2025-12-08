#include <iostream>
#include <string>

using namespace std;

class Person{

    public:
      string name;
      int age;
    
    Person(){

    }

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }

};

class Student: public Person{
    public: 
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age){
        this->rollno = rollno;
    }

    void getInfo(){
        cout<<"Name: "<<name<<"\nAge: "<<age<<"\nRoll No: "<<rollno<<endl;
    }
};

int main(){

    Student s("Ruru", 55, 897);
    //   or with no contructor in student & default constrctor of person below
    // s.name = "Shri";
    // s.age = 20;
    // s.rollno = 44;

    s.getInfo();

    return 0;
}