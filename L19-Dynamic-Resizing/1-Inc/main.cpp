#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include "IntSet.h"

using namespace std;

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    srand(atoi(argv[2]));
    IntSet s(1);

    clock_t begin = clock();
    for(int i=1; i<n; i++){
    	s.insert(i);
    }
    clock_t end = clock();
    cout << double(end - begin) / CLOCKS_PER_SEC << endl;

    return 0;
}
