#include <iostream>
using namespace std;

class A{
   int a=0;
   int b=1;
public:
   virtual void print() const{
      cout << a << " " << b << endl;
   }
};

class B: public A{
   int c=2;
public:
   void print() const{
      A::print();
      cout << c << endl;
   }
};

int main(){
   A a;
   a.print();

   B b;
   b.print();

   A ab=b;
   ab.print();
   
   A *pa = &b;
   pa->print();

   return 0;
}
