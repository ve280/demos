#include <iostream>

using namespace std;

const int& max(const int& x, const int& y){
    return (x > y) ? x : y;
}

const double& max(const double& x, const double& y){
    return (x > y) ? x : y;
}

const char& max(const char& x, const char& y){
    return (x > y) ? x : y;
}

int main(){
    std::cout << max(0, 1) << '\n';

    std::cout << max(3.14, 3.14159) << '\n';

    std::cout << max('a', ' ') << '\n';

    return 0;
}

