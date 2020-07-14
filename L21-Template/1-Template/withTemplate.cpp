#include <iostream>

template <class T>
const T& max(const T& x, const T& y){
    return (x > y) ? x : y;
}

int main(){
    std::cout << max(0, 1) << std::endl;

    std::cout << max(3.14, 3.14159) << std::endl;
   
    std::cout << max('a', ' ') << std::endl;

    std::cout << max("hello", "world") << std::endl;

    return 0;
}

