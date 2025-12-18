#include <iostream>
#include <string>

using namespace std;

class shape{
    public:
     virtual void draw() = 0; 
     // This is called pure virtual function
     // A class with pure virtual function is called abstract class
};

class Circle: public shape{
    public:
     void draw() override{
        cout<<"drawing circle...";
     }
};

int main(){
    //shape s;
    //Cannot create object of abstract class

    //create pointer to abstract class
    shape* s = new Circle();
    s->draw();

    delete s;
     // OR
    Circle c;
    c.draw();

}