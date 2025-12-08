#include <iostream>
#include <string>

using namespace std;


class Person{

    public:
      string name;
      int age;
    
    Person(){

    }

    // Person(string name, int age){
    //     this->name = name;
    //     this->age = age;
    // }

};

class Student: public Person{
    public:
      string name;
      int rollno;
};

class Teacher: public Person{
    public: 
     string subject;
     double salary;
};

int main(){
    
}
