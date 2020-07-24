#include <iostream>
#include <vector>
#include <limits>

int main(){
   std::vector<int> v(
         std::numeric_limits<unsigned short>::max(), 0);
   std::cout << v[0] << std::endl;
   short ssize = v.size();
   std::cout << ssize << std::endl;
   int isize = v.size();
   std::cout << isize << std::endl;
}
