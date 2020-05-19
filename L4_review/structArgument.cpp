#include <iostream>

const int MAX=10000;

typedef struct{
    int array[MAX];
    int *p;
} LargeStruct;

using namespace std;

void f(LargeStruct ls){
    cout << "debut" << endl;
    ls.array[0] = 2020;
    cout << "ok" << endl;
    ls.p[1] = 2021;
    cout << "ek" << endl;
}

int main(){
    LargeStruct ls;
    int array[MAX];

    for(int i=0; i<MAX; i++){
        ls.array[i] = i;
        array[i] = i;
    }
    cout << array << endl;
    ls.p = array;
    cout << ls.p << endl;

    f(ls);

    cout << ls.array[0] << endl;
    cout << array[1] << endl;

    return 0;
}

