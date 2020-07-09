#include <iostream>

int f(int a[], int n){
    for (int i=0; i<n; i++){
        a[i] = i;
    }
}

int print(int a[], int n){
    for(int i=0; i<n; i++){
        std::cout << i << ": " << a[i] << std::endl;
    }
}

int main(){
    int a[] = {0, 0, 0, 0, 0};

    print(a, 5);
    f(a, 5);
    print(a, 5);

    return 0;
}
