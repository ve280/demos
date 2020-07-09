#include "add.h"

int add(int n, int m){
    int result = n;
    for (int i=0; i<m; i++){
        result = inc(result);
    }
    return result;
}
