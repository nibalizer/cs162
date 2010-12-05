// Spencer Krum
// CS162
// Karla Fant
// Program 3
// DBAD License
// Oct 23, 2010


#include <stdlib.h>
#include <iostream>
#include <fstream>
#include "file.cpp"
#include "index.cpp"
#include "program3.h"

using namespace std;


int main () {
    intro();
/*    file file1;
    file file2;
    file1.readfile();
    file1.displayfile();
    char namez[20];
    cin.get(namez, 20, '\n');
    cin.ignore(20, '\n');
    int t;
    t = file2.comparefilename(namez);
    cout << t << endl;
*/  
    index awesome_index;
    userinterface(awesome_index);
    return 0;

}

void userinterface(index& awesome_index){
    int selection = -1;
    //while(true){
        cout << "Please pick one of the 4 options below" << endl;
        cout << "1 - Print out whole database" << endl;
        cout << "2 - Add a file to database" << endl;
        cout << "3 - Search database by filename" << endl;
        cout << "4 - Quit" << endl;
        cin >> selection;
        switch (selection) {
            case 1: {
                awesome_index.display();
                break;
                    }
            case 2: {
                file awesome_new_file;
                awesome_new_file.readfile();
                awesome_index.extend(awesome_new_file);
                break;
                    }
            case 3: {
                searchdb(awesome_index);
                break;
                    }
            case 4:
                exit (0);
                break;
            default :
                cout << "Please enter 1, 2, 3, or 4." << endl;
     //   }
    }
}

void searchdb(index& awesome_index){
    char filename[20];
    cout << "File name: " << endl; 
    cin.get(filename, 20, '\n');
    cin.ignore(20, '\n');
    awesome_index.find(filename);
}

void intro(){
    cout << "CS 162 Program 3" << endl;
    cout << "File Indexing program." << endl;
}
