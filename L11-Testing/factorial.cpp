#include <iostream>
using namespace std;

int factorial(int n){
    // REQUIRES: n>=0
    // EFFECTS: returns n!
    assert(n>=0);
    if (n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    cout << "0!= "  << factorial(0) << endl;
    cout << "1!= "  << factorial(1) << endl;
    cout << "10!= "  << factorial(10) << endl;

    cout << "16!= "  << factorial(16) << endl;
    cout << "17!= " << factorial(17) << endl;

    return 0;
}
