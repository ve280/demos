#include <iostream>
#include <vector>
#include <limits>

int main(){
   std::vector<int> v(
         std::numeric_limits<unsigned short>::max(), 0);
   std::cout << std::numeric_limits<short>::max() << std::endl;
   std::cout << std::numeric_limits<unsigned short>::max() << std::endl;

   std::cout << "v[0]= " << v[0] << std::endl;

   short ssize = v.size();
   std::cout << "short size: " << ssize << std::endl;
   int isize = v.size();
   std::cout << "int size: " << isize << std::endl;

   for(int i=0; i<isize; i++){
      v.pop_back();
   }
   v.pop_back();
   std::cout << v[0] << std::endl;

   isize = v.size();
   std::cout << "int size: " << isize << std::endl;
}
