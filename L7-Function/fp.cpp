#include <iostream>
using namespace std;

int min(int x, int y){
    if (x < y){
        return x;
    } else{
        return y;
    }
}

int max(int x, int y){
    if (x < y){
        return y;
    } else{
        return x;
    }
}

typedef int (* funp_t)(int, int);

funp_t choose(int i){
    if (i==0){
        return min;
    } else{
        return max;
    }
}

int main(){
    int (* fp)(int, int) = min;
    int (* fpArray[])(int, int) = {min, max};
    int (** fpp)(int, int) = fpArray;
    cout << fp(1, 2) << endl;
    cout << fpArray[0](2, 3) << endl;
    cout << fpArray[1](3, 4) << endl;
    //fp++; // doesn't make sense; what does it point to after inc? 
    //fpArray++; // arrays are rvalues
    fpp++;
    cout << (*fpp)(4, 5) << endl;
    cout << (void *)fp << endl;

    cout << choose(0)(6, 7) << endl;
    cout << choose(1)(6, 7) << endl;
    return 0;
}
