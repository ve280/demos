#include "sub.h"

int sub(int n, int m){
    int result = n;
    for (int i=0; i<m; i++){
        result = dec(result);
    }
    return result;
}
