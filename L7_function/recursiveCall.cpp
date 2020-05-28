#include <iostream>
using namespace std;

const int SIZEMAX=1000;
const int NCOUT = 100;

struct LargeStruct{
    int a[SIZEMAX];
};

void recursiveFunction(LargeStruct ls, int i){
    if (i % NCOUT == 0){
        cout << i << endl;
    }
    return recursiveFunction(ls, i+1);
}

int main(){
    LargeStruct ls;

    recursiveFunction(ls, 0);

    return 0;
}
