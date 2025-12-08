#include <iostream>
#include <string>

using namespace std;

// Base class
class Person{
    protected:
     string name;

     public:
       Person(const string& name): name(name){

       }

       void display(){
        cout<<"\nName "<< name<<endl;
       }
};

// Derived class1 : Employee (Single Inheritance)

class Employee: public Person{
    protected:
      int empId;

    public:
      Employee(const string& name, int id): Person(name), empId(id){

      }

      void displayEmp(){
        display();
        cout<<"Emp Id: "<<empId<<endl;
        cout<<"Inside derived class Employee"<<endl;
      }
};

// Derived class2 : Student (Single Inheritance)

class Student: public Person{
    protected:
      int studId;

    public:
      Student(const string& name, int id): Person(name), studId(id){

      }

      void displayStud(){
        display();
        cout<<"Student Id: "<<studId<<endl;
        cout<<"Inside derived class Student"<<endl;
      }
};

// Derived class3: StudentIntern (multiple inheritance)

class StudentIntern: public Employee, public Student{
    public:
     StudentIntern(const string& name, int empId, int stuId): Employee(name, empId), Student(name, studId) {}

     void displayStudIntern(){
        cout<<"Inside derived class StudentIntern "<<endl;

        displayEmp();
        displayStud();
     }
};

int main(){
     StudentIntern SI("Pragati", 23, 17);

     SI.displayStudIntern();
}
