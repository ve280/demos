#include <iostream>

int main(){
    int a[] = {0, 1, 2, 3, 4, 5};

    int *p = a;

    std::cout << "a = " << a << std::endl;
    std::cout << "p = " << p << std::endl;
    std::cout << "*p= " << *p << std::endl;
    std::cout << "p++= " << p++ << std::endl;
    std::cout << "p= " << p << std::endl;
    std::cout << "*p= " << *p << std::endl;
    std::cout << "++p= " << ++p << std::endl;
    std::cout << "p= " << p << std::endl;
    std::cout << "*p= " << *p << std::endl;
    p += 2;
    std::cout << "p= " << p << std::endl;
    std::cout << "*p= " << *p << std::endl;

    return 0;
}
