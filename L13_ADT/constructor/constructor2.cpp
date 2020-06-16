#include <iostream>
using namespace std;

class C{

public:
   C(){
      cout << "Constructor of C" << endl;
   };
};

class D{
   C c;

public:
   D(C x){
      c = x;
   };
};

int main(){
   C c;
   cout << "after c" << endl;
   D d(c);

   return 0;
}

