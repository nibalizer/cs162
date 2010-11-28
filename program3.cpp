// Spencer Krum
// CS162
// Karla Fant
// Program 3
// DBAD License
// Oct 23, 2010


#include <iostream>
#include <fstream>
#include "program3.h"
//#include "index.cpp"
#include "file.cpp"


using namespace std;


int main () {
    intro();
    file file1;
    file file2;
    file1.readfile();
    file1.displayfile();
    char namez[20];
    cin.get(namez, 20, '\n');
    cin.ignore(20, '\n');
    int t;
    t = file2.comparefilename(namez);
    cout << t << endl;

}


void intro(){
    cout << "CS 162 Program 3" << endl;
    cout << "File Indexing program." << endl;
}
