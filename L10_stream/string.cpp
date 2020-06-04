#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main(){
    ostringstream oStream;
    int n = 42;
    double pi = 3.14159;

    oStream << "n= " << n << " ";
    oStream << "pi= ";
    oStream << setprecision(5);
    oStream << pi << endl;

    string s = oStream.str();
    cout << s;

    istringstream iStream;
    iStream.str(s);

    string sr;
    int nr;
    double pir;

    iStream >> sr >> nr;
    cout << sr << " " << nr << endl;
    iStream >> sr >> pir;
    cout << sr << " " << pir << endl;
}
