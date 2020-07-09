#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream iFile;
    string filename = argv[1]; // Better test argc before
	iFile.open(filename);
    if (iFile){
        string line;
        while(getline(iFile, line)) {
            cout << line << endl;
        }
        iFile.close();
    } else{
        cerr << "File could not be opened" << endl;
    }
}

