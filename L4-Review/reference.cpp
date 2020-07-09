#include <iostream>

using namespace std;

int main(){
    int a = 42;
    int &b = a;

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "&a=" << &a << endl;
    cout << "&b=" << &b << endl;
    
    return 0;
}
