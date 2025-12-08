#include <iostream>
#include <string>

using namespace std;

class Student{
    public:
      string name;
      int rollno;
};

class Teacher{
    public: 
     string subject;
     double salary;
};

class TA: public Student, public Teacher{
   public:
    void getInfo(){
        cout<<"Name: "<<name<<"\nSalary: "<<salary<<"\nRoll No: "<<rollno<<"\nSubject: "<<subject<<endl;
    }
};

int main(){
    TA ta;
    ta.name = "Harjuu";
    ta.rollno = 97776;
    ta.salary = 20000.00;
    ta.subject = "Machine Learning";

    ta.getInfo();
    
}