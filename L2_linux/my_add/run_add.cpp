#include <iostream>
#include "add.h"

using namespace std;

int main()
{
    int a, b;
    cout << "Please input two integers: ";
    cin >> a >> b;
    cout << "Their sum is " << add(a, b) << endl;
    return 0;
}
