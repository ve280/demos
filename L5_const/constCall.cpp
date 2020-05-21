#include <iostream>
#include <time.h>

using namespace std;

// Constants; avoid using #define
const int SIZEMAX=100000;
const int IMAX=1000;

typedef struct{
    int array[SIZEMAX];
    int *p;
} LargeStruct;

// Camel case
void fByValue(LargeStruct ls){
    ls.array[0] = 2020;
    ls.p[1] = 2021;
}

// Snake case
void f_with_reference(LargeStruct &ls){
    ls.array[0] = 2022;
    ls.p[1] = 2023;
}

// Mix of the two naming conventions
void f_withPointer(LargeStruct *ls){
    ls->array[0] = 2024;
    ls->p[1] = 2025;
}

int main(){
    // This ls is of course different from the ls in the functions' argument
    LargeStruct ls;
    int array[SIZEMAX];
    // const can be bound to a non-const variable
    const LargeStruct &lsConst = ls;
    // Initialization of ls
    for(int i=0; i<SIZEMAX; i++){
        ls.array[i] = i;
        array[i] = i;
    }
    ls.p = array;

    // Variables to measure time
    struct timespec start, finish;
    double elapsed;

    // Measure time for call by value
    cout << "Call by value:\n"; // '\n' = end of line
    clock_gettime(CLOCK_MONOTONIC, &start);
    for(int i=0; i<IMAX; i++){
        fByValue(ls);
    }
    cout << "ls.array[0]= " << ls.array[0] << endl;
    cout << "ls->p[1]= " << ls.p[1] << endl;
    clock_gettime(CLOCK_MONOTONIC, &finish);
    elapsed = (finish.tv_sec - start.tv_sec);
    elapsed += (finish.tv_nsec - start.tv_nsec) / 1000000000.0;
    cout << "Time needed: " << elapsed << endl;

    // Measure time for call with reference
    cout << "Call with reference\n";
    clock_gettime(CLOCK_MONOTONIC, &start);
    for(int i=0; i<IMAX; i++){
        f_with_reference(ls);
    }
    cout << "ls.array[0]= " << ls.array[0] << endl;
    cout << "ls->p[1]= " << ls.p[1] << endl;
    clock_gettime(CLOCK_MONOTONIC, &finish);
    elapsed = (finish.tv_sec - start.tv_sec);
    elapsed += (finish.tv_nsec - start.tv_nsec) / 1000000000.0;
    cout << "Time needed: " << elapsed << endl;

    // Measure time for call with pointer
    cout << "Call with pointer:\n";
    clock_gettime(CLOCK_MONOTONIC, &start);
    for(int i=0; i<IMAX; i++){
        f_withPointer(&ls);
    }
    cout << "ls.array[0]= " << ls.array[0] << endl;
    cout << "ls->p[1]= " << ls.p[1] << endl;
    clock_gettime(CLOCK_MONOTONIC, &finish);
    elapsed = (finish.tv_sec - start.tv_sec);
    elapsed += (finish.tv_nsec - start.tv_nsec) / 1000000000.0;
    cout << "Time needed: " << elapsed << endl;

    return 0;
}
