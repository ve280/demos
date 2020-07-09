#include <iostream>
#include <time.h>

using namespace std;

void fString(string &s){
    return;
}

void fStringConst(const string &s){
    return;
}

int main(){
    int i = 1;
    // const can be bound to a non-const variable
    const int &iConst = i;

    // '\t' is the tabulation character
    cout << "i= \t" << i << endl;
    cout << "iConst= " << iConst << endl;

    i = 2;

    cout << "i= \t" << i << endl;
    cout << "iConst= " << iConst << endl;

    string s = "hello";
    const string sConst = s;

    fString(s);
    fStringConst(s);

    fString(sConst);
    fStringConst(sConst);

    return 0;
}
