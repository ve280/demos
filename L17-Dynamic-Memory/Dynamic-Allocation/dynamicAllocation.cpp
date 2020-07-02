#include <iostream>
using namespace std;

int main(){
   int *p = new int(2019);
   cout << "p=" << p << "->" << *p << endl;

   int *q = p;
   cout << "q=" << q << "->" << *q << endl;
   delete p;
   delete q;

   int *r = new int;
   cout << "r=" << r << "->" << *r << endl;
   cout << "q=" << q << "->" << *q << endl;
   delete r;
   return 0;
}
