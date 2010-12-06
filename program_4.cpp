// Spencer Krum
// CS162
// Karla Fant
// Program 4
// DBAD License
// Nov 29, 2010


#include <iostream>
#include "program_4_notebook.cpp"
#include "program_4.h"

using namespace std;

int main(){
    intro();
    help();
    mainloop();
    return 0;
}
void help(){
    cout << "Press a number at the prompt to get the desired action." << endl;
    cout << "1 - Print this help." << endl;
    cout << "2 - Add to the notebook." << endl;
    cout << "3 - Print the notebook. " << endl;
    cout << "4 - Quit the program." << endl;
}

void mainloop(){
    int t;
    notebook book;
    do{
        t = 0;
        cin >> t;
        if (t == 1)
            help();
        else if (t == 2)
            book.add();
        else if (t == 3)
            book.print();
        else if (t == 4)
            quit();
    }while(t != 4);
}


void quit(){
    cout << "Thank you for using this program." << endl;
    cout << "Have a nice day." << endl;
}

void intro(){
    cout << "CS 162 Programs 4" << endl;
    cout << "Notebook program with dynamic arrays." << endl;
}

