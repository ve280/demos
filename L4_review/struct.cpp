#include <iostream>

typedef struct {
    char c;
    int i;
    long l;
    float f;
    double d;
    char s[3];
    bool b;
    bool end;
} S;

using namespace std;

int main(){
    S s;

    cout << "&s = " << &s << endl;
    cout << "&s.c = " << static_cast<void*> (&s.c) << endl; // cast needed
    cout << "&s.i = " << &s.i << endl;
    cout << "&s.l = " << &s.l << endl;
    cout << "&s.f = " << &s.f << endl;
    cout << "&s.d = " << &s.d << endl;
    cout << "&s.s = " << &s.s << endl;
    cout << "&s.b = " << &s.b << endl;
    cout << "&s.end = " << &s.end << endl;

    cout << sizeof(char) << endl;

    return 0;
}
