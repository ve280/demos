#include <iostream>
using namespace std;

int main(){
   int *p = new int(0);
   cout << *p << endl;
   (*p) ++;
   cout << *p << endl;
   delete p;

   int n = 10;
   p = &n;
   cout << *p << endl;
   delete p;
}
