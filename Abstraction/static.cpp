#include <iostream>
#include <string>

using namespace std;

void fun(){

    // int p = 0;
    // cout<<"p : "<<p<<endl;
    // p++; all object creates thier own copy of p 

    static int p = 0;
    cout<<"p : "<<p<<endl;
    p++; // not in call stack , but all objects refer to the same p

}

// x is a static data member.

// It belongs to class A, not to any object.

// All objects of class A share the same single copy of x.

// Since it is declared const, it cannot be modified.

class A{
public:
    static int x;

    void incX(){
        x = x + 1;
    }
};

int A::x = 100;

int main(){
    fun();
    fun();
    fun();

   A::x += 3; // Assuming fun() was meant to increment x

    A a;
    a.incX();
    a.incX();


    
    cout << A::x << endl;


    return 0;
}