#include "incdec.h"

int inc(int n){
    if (n==MAX){
        n = 0;
    } else{
        n++;
    }
    return n;
}

int dec(int n){
    if (n==0){
        n = MAX;
    } else{
        n--;
    }
    return n;
}
