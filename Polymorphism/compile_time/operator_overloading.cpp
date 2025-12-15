#include <iostream>
#include <string>

using namespace std;

class Complex{
    private:
      int real;
      int imaginary;

    public:
      Complex(int r, int i){
        real = r;
        imaginary = i;
      }

      void print(){
        cout<<real<<" + i"<<imaginary<<endl;
      }

      Complex operator+(const Complex c2){
        Complex c3(0, 0);
        c3.real = this-> real + c2.real;
        c3.imaginary = this->imaginary + c2.imaginary;

        return c3;
      }
};

int main(){
    Complex c1(2, 5), c2(3, 4);
    Complex c3 = c1 + c2;

    c3.print();
}