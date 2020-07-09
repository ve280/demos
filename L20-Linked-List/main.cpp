#include <iostream>
#include "IntList.h"
using namespace std;

void foo(IntList x){
    cout << "Print copy in function foo" << endl;
    x.print();
}

int main(){
    IntList s;
    cout << "Insert 1 at the front" << endl;
    s.insert(1);
    cout << "Insert 2 at the front" << endl;
    s.insert(2);
    cout << "Insert 3 at the front" << endl;
    s.insert(3);
    s.print();

    foo(s);

    {
        IntList x;
        x = s;
        cout << "Print copy by assignment" << endl;
        x.print();
    }

    cout << "Remove the first item" << endl;
    s.remove();
    s.print();

    return 0;
}
