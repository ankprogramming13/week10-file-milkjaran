#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int cmd;
        /* code */
        ofstream writefile ("std.txt", ofstream::app);
        ifstream readFile ("std.txt");
        string line;
        string name;

        cin >> cmd;
        if (cmd== 1) {
            cin >>name;
            if (writefile.is_open()) {
                writefile << name << endl;
                writefile.close ();
            } else {
                cout << "Unable to open file";
            }
        }else if (cmd==2) {
            if (readFile.is_open ()) {
                while ( getline (readFile,line))
                    cout << line << '\n';
            }
                readFile.close();
        }

        return 0;
}
