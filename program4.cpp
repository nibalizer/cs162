// Spencer Krum
// CS162
// Karla Fant
// Program 4/5
// DBAD License
// Nov 29, 2010


#include <iostream>
#include <stdlib.h>
#include "notebook.cpp" 
#include "program4.h"

int main() {
    intro();
    notebook book; 
    userinterface(book);
    return 0; //never makes it
}

void userinterface(notebook& book){
    int selection = -1;
    //while(true){
        cout << "Please pick one of the 4 options below" << endl;
        cout << "1 - Print out whole notebook" << endl;
        cout << "2 - Print out a single page" << endl;
        cout << "3 - Add an entry to the notebook" << endl;
        cout << "4 - Quit" << endl;
        cin >> selection;
        switch (selection) {
            case 1: {
                book.print(); 
                break;
                    }
            case 2: {
                cout << "Page Number: " ;
                int i;
                cin >> i;
                book.print(i);
                break;
                    }
            case 3: {
                book.addentry();
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

void intro(){
    cout << "CS 162 Programs 4 and 5" << endl;
    cout << "Notebook program with linked lists." << endl;
}


