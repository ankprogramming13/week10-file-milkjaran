#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
        /* code */
        string line;
        ifstream myfile ("example.txt");
        if (myfile.is_open())
        {
            while ( getline (myfile,line))
            {
                cout << line << '\n';
            }
            myfile.close();
        }
        else cout << "Unble to open file";

        return 0;
}
