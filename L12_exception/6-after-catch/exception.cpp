#include <iostream>
#include <cstdlib>
using namespace std;

int factorial(int n){
	int result = 1;
	if(n < 0)
		throw n;
	for(result = 1; n>0; n--)
		result *= n;

	return result;
}

void run_factorial(int n){
	try{
		cout << n << "! = " << factorial(n) << endl;
	} catch(int v){
		cerr << "Error: negative input: " << v << endl;
	}
    cout << "End of run_factorial" << endl;
}

int main(int argc, char *argv[]){
    int n;
    cout << "Please input a non-negative integer: " << flush;
    cin >> n;
    run_factorial(n);
	return 0;
}
