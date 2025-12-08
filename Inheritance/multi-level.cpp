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

};

class GradStudent: public Student{
    public:
     string researchArea;

    void getInfo(){
        cout<<"Name: "<<name<<"\nAge: "<<age<<"\nRoll No: "<<rollno<<"\n reasearchArea: "<<researchArea<<endl;
    }
};

int main(){
    GradStudent gs;
    gs.name = "Anu";
    gs.age = 22;
    gs.rollno = 789;
    gs.researchArea = "NLP";

    gs.getInfo();
}