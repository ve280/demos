#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include "IntSet.h"

using namespace std;

int main(int argc, char *argv[]) {
   IntSet foo;
   int n = atoi(argv[1]);
   srand(atoi(argv[2]));

   clock_t begin = clock();
   for(int i=0; i<n; i++){
      foo.insert(rand());
   }
   clock_t end = clock();
   cout << double(end - begin) / CLOCKS_PER_SEC << endl;

   //foo.print();

   begin = clock();
   for(int i=0; i<n; i++){
      foo.query(rand());
   }
   end = clock();
   cout << double(end - begin) / CLOCKS_PER_SEC << endl;
   
   return 0;
}
