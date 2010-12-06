// Spencer Krum
// CS162
// Karla Fant
// Program 4
// DBAD License
// Nov 29, 2010

#include "program_4_notebook.h"
#include <iostream>
using namespace std;

notebook::notebook(){
    pages = new page* [1];
    pages[0] = new page;
    num_pages = 1;

    pages[0]->entries = new entry* [1];
    pages[0]->entries[0] = new entry;
    pages[0]->num_entries = 1;


    pages[0]->entries[0]->name = new char [20];
    pages[0]->entries[0]->text = new char [20];
    pages[0]->entries[0]->name = "Default Name";
    pages[0]->entries[0]->text = "Default Text";
    pages[0]->entries[0]->type = 1;
    pages[0]->entries[0]->xloc = 2;
    pages[0]->entries[0]->yloc = 3;
    
}

void notebook::add(){
    addpages(); //get pg# from user, make more pages if necessary
    addentry(); //get entry data from user, add to entries on that page
    cout << "Entry Added." << endl;
}

void notebook::print(){
    for (int i = 0; i < num_pages; i++){
        for (int j = 0; j < pages[i]->num_entries; i++){
            cout << "The data for page " << i << ", entry " << j << " is as follows:"<< endl;

            cout << "Name: " << pages[0]->entries[0]->name << endl; 
            cout << "Text: " << pages[0]->entries[0]->text << endl;
            cout << "Type: " << pages[0]->entries[0]->type << endl;
            cout << "Xcoordinate: " << pages[0]->entries[0]->xloc << endl;
            cout << "Ycoordinate: " << pages[0]->entries[0]->yloc << endl;
        }
    }
}

void notebook::addpages(){
    cout << "Which page will this entry go on?" << endl;
    int pagenum;
    cin >> pagenum;
    cout << pagenum;
}
void notebook::addentry(){
    char temp[100];
    cin.get(temp, 100, '\n');
    cin.ignore(100, '\n');
    cout << temp << endl;
}
