#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>

using namespace std;

int main(){
    cout << "Welcome!" << endl;
    cout << "Let's sleep...";
    this_thread::sleep_for(chrono::milliseconds(5000));
    cout << " 5 seconds later with flush!" << flush;
    this_thread::sleep_for(chrono::milliseconds(5000));
    cout << " 5 seconds later with EOL!\n";
    this_thread::sleep_for(chrono::milliseconds(5000));
    cout << "Enter a number: ";
    int n;
    cin >> n; // Try with 100 and 1000
    for(int i=0; i<n; i++){
        cout << setw(5) << i << " ";
    }
    this_thread::sleep_for(chrono::milliseconds(5000));
    cout << "It's the end!";
    return 0;
}
