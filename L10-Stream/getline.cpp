#include <iostream>
using namespace std;

int main(){
    int foo;
    double bar;
    string baz;
    cin >> foo >> bar;
//    char ch;
//    cin.get(ch);
    getline(cin, baz);

    cout << foo << " " << bar << " " << baz << endl;

    return 0;
}
