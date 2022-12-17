/*  Implement a class Complex which represents the Complex Number data 
type. Implement the following
1. Constructor (including a default constructor which creates the complex 
number 0+0i).
2. Overload operator+ to add two complex numbers.
3. Overload operator* to multiply two complex numbers.
4. Overload operators << and >> to print and read Complex Numbers.*/

#include <iostream>
using namespace std;

class complex{

    //private member
    int a,b ;


    public:
    //default constructor
    complex(){
       a = 0;
       b = 0;
    }

    //parameterized constructor
    complex(int x, int y){
        a = x;
        b = y;
    };

    //print complex number
    void display(){
        cout<<a<<" + "<<b<<"i"<<endl;
    };

    //overloading operators

    //overloading + operator
    complex operator + (complex obj){
        complex c3;
        c3.a = a + obj.a;
        c3.b = b +obj.b;
        return c3;
    };


    //overloading * operator
    complex operator * (complex obj){
        complex c3;
        c3.a = a * obj.a;
        c3.b = b * obj.b;
        return c3;
    }

   //overloading << operator for printing 
   //need to declare it friend 
   friend ostream& operator << (ostream& , complex c9){
    cout<<c9.a<<" + "<<c9.b<<"i"<<endl;
   }

};

int main(){
  complex c1 (2,4);
  complex c2 (3,6);
  c1.display();
  complex c4;
  cout<<"calculation of addition using overloaded +"<<endl;
  c4 = c1+ c2;
  c4.display();
  cout<<"calculation of multiplication using overloaded *"<<endl;
  complex c5;
  c5 = c1*c2;
  c5.display();
  cout<<c5;


    return 0;
}