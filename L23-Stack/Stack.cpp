#include <iostream>
#include "IntList.h"
using namespace std;

class Stack{
   IntList l;
   int n;

public:
   Stack(): l(), n(0){};

   int size(){ return n; }

   void push(int v){ l.insert(v); n++; }

   void pop(){ l.remove(); n--; }

   int &top(){ return l.head(); }
};

int main(int argc, char *argv[]){
   string line;
   cout << "Enter an expression:" << endl;
   getline(cin, line);

   Stack s;
   for(int i=0; i<line.length(); i++){
      if (line[i] == '(')
         s.push(i);
      else if (line[i] == ')'){
         cout << "(" << s.top();
         s.pop();
         cout << ", " << i << ")" << endl;
      }
   }
   if (s.size())
      cout << "Missing closing parenthesis!" << endl;

   return 0;
}
