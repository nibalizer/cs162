//basic file operations
//http://www.cplusplus.com/doc/tutorial/files/
//

#include <iostream>
#include <fstream>

using namespace std;

int main () {
    //ofstream myfile;
    //myfile.open ("example.txt");
    //myfile << "Writing this to a file.\n";
    //myfile.close();
    ifstream readfile;
    readfile.open("example.txt");
    char line[100];
    if (readfile.is_open())
    {
        while ( readfile.good() )
        {
           readfile.getline (line, 60);
            cout << line << endl;
        }
        readfile.close();
    }
    else cout << "Unable to open file, something went wrong";
    
    return 0;
}

