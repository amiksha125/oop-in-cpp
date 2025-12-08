#include <iostream>
#include <string>

using namespace std;

class Furniture
{
 double price;
public:
   string material;
   int length;
   int width;

   //Paratemetrized constructor
   Furniture(string material, int length, int w){
    this->material = material;
    this->length = length;;
    width = w;

   }

   Furniture(int length, int w){
    this->length = length;;
    width = w;

   }
   //Copy constructor
   Furniture(Furniture &orgObj){
    cout<<"I am inside custom copy constructor....\n";
    this->material = orgObj.material;
    this->length = orgObj.length;
    this->width = orgObj.width;
   }
   
   void assemble(){
     cout<<"Creating "<<material<<" of length "<<length<<" inch and width "<<width<<" inch"<<endl;
   }

};

//Shallow and deep copy

class Student{

    public:
     string name;
     double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        this->cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
   //copy constructor for deep copy
    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    //destructor
    ~Student(){
        cout<<"I delete everything.";
        delete cgpaPtr; // to prevent memory leak
    }

    void getInfo(){
        cout<<"Name: "<<name<<" CGPA: "<<*cgpaPtr<<endl;
    }

};
int main(){
    //Parametersized
    Furniture f1("metal", 13, 67);
    f1.assemble();

    Furniture f2(23, 45);
    f2.material = "wood";
    f2.assemble();
   
    //Copy
    //can be created automatically by cpp if we dont define it
    Furniture f3(f1);
    f3.assemble();

    //shallow & deep copy
    cout<<"shallow & deep copy"<<endl;
    Student s1("rahul", 8.8);
    Student s2(s1);
    s2.name = "neha";

    s1.getInfo();
    s2.getInfo();
    
    *(s2.cgpaPtr) = 9.3;

    s2.getInfo();
    s1.getInfo(); //cgpa changed for rahul also this is problem of shallow copy with dynamic allocation

    //deep copy we need copy constructor in class, if u uncomment this u can see the effects of shallow copy
 
    
}
