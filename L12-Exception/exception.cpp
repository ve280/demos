#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]){
   if (argc<2){
      throw "Not enough arguments!";
   }
   try{
      ifstream ifs;
      ifs.open(argv[1]);
      if (!ifs){
         throw string("File cannot be opened!");
      }
      try{
         int n;
         ifs >> n;
         if (!ifs){
            throw 0;
         } 
      } catch(long l){
      }
   } catch(string s){
      clog << s << endl;
   } catch(int n){
      clog << n << endl;
   }
}
