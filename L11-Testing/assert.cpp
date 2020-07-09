#include <iostream>
//#define NDEBUG
#include <cassert>
using namespace std;

int main(){
    cout << "Starts" << endl;
    assert(true);
    cout << "Continues" << endl;
    assert(false);
    cout << "Ends" << endl;
}
