#include <iostream>
#include <string>

using namespace std;

class Table{
    
    string material;

    public:
      Table(){
        cout<<"Defualt constructor called";
      }

      Table(const Table &obj){
           cout<<"\nCopy constructor called";
           this->material = obj.material;
      }

      Table(string material){
         cout<<"\nParameterized constructor called";
        this->material = material;
      }
};

int main(){
    Table t1;
    Table t2("wood");
    Table t3(t2);
}