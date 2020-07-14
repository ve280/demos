#include <iostream>
#include "List.h"
using namespace std;

void foo(List<int> x){
    cout << "Print copy in function foo" << endl;
    x.print();
}

int main(){
    List<int> s;
    cout << "Insert 1 at the front" << endl;
    s.insert(1);
    cout << "Insert 2 at the front" << endl;
    s.insert(2);
    cout << "Insert 3 at the front" << endl;
    s.insert(3);
    s.print();

    foo(s);

    {
        List<int> x;
        x = s;
        cout << "Print copy by assignment" << endl;
        x.print();
    }

    cout << "Remove the first item" << endl;
    s.remove();
    s.print();

    List<string> list;
    list.insert("world!");
    list.insert("hello");
    list.print();

    return 0;
}
