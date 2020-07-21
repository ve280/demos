#include <iostream>
using namespace std;

class A{
   int a=0;
   int b=1;
public:
   void set(int _a, int _b){
      a = _a;
      b = _b;
   }

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
   cout << "A: "; 
   a.print();

   B b;
   cout << "B: ";
   b.print();

   b.set(5, 6);
   b.print();

   A ab=b;
   cout << "A: ";
   ab.print();
   
   A *pa = &b;
   cout << "A*: ";
   pa->print();

   return 0;
}
