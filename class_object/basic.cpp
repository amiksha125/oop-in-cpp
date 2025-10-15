#include <iostream>
#include <string>

using namespace std;

class Teacher{
    // attributes
  private:
    double salary;
  public:
    string name;
    string dept;
    string subject;

    //member function
    void changeDept(string newDept){
        dept = newDept;
        cout<<"Dept changed to: "<<dept<<endl;
    }
     //setter
    void setSalary(double sal){
        salary = sal;
        cout<<"Salary is set to: "<<salary<<endl;
    }
    
    //getter
    double getSalary(){
        return salary;
    }

};

//Encapsulation

class Account{

    private:
     double balance;
     string password; //data hiding of sensitive information 

    public:
     string accountId;
     string unsername;
};

int main() {
    Teacher t1;
    t1.name = "Amiksha";
    t1.dept = "CSE";
    //t1.salary = 25000;
    t1.subject = "OS";
   
    cout<<" name: "<<t1.name<<" dept: "<<t1.dept<<" subject: "<<t1.subject<<endl;
    t1.changeDept("IT");

    t1.setSalary(25000);
    cout<<t1.getSalary()<<endl;

    return 0;
}