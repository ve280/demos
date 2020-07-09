#include <iostream>
#include "add.h"
#include "sub.h"

using namespace std;

int main(){
    int n = 10;
    int m = 2;

    cout << add(n, m) << endl;
    cout << sub(n, m) << endl;

    return 0;
}
