#include <iostream>
using namespace std;

int main(){
    int x;
    try{
        throw x;
    } catch(long n){
        cout << "long";
    } catch(int n){
        cout  << "int";
    }
    cout << endl;

    long y;
    try{
        throw y;
    } catch(long n){
        cout << "long";
    } catch(int n){
        cout  << "int";
    }
    cout << endl;
}
