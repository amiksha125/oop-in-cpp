#include <iostream>
#include <string>

using namespace std;

class Parent{
    public:
      void getInfo(){
        cout<<" Parent Class\n";
      }

      virtual void show(){
        cout<<" Hi, from parent!"<<endl;
      }
};

class Child: public Parent{
  public:
   void getInfo(){
     cout<<" Child class\n";
   }

   void show(){
        cout<<" Hi, from child!"<<endl;
      }
};

int main(){
    Parent p;
    p.getInfo();

    Child c;
    c.getInfo();

    c.show();
    p.show();
}