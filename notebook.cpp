// Spencer Krum
// CS162
// Karla Fant
// Program 4/5
// DBAD License
// Nov 29, 2010

#include "notebook.h"
#include <iostream>
#include <string.h>
using namespace std;

notebook::notebook(){
   pages = NULL; 
   num_pages = 0;

}

void notebook::print(){
    for (int i = 0; i < num_pages; i++){
        for (int j = 0; i < pages[i].num_entries; i++){
           cout << pages[i].entries[j].name << endl;
           cout << pages[i].entries[j].type << endl;
           cout << pages[i].entries[j].textfield << endl;
           cout << pages[i].entries[j].xlocation << ", ";
           cout << pages[i].entries[j].ylocation << endl;
        }
    }
}

void notebook::print(int i){
    for (int j = 0; i < pages[i].num_entries; i++){
       cout << pages[i].entries[j].name << endl;
       cout << pages[i].entries[j].type << endl;
       cout << pages[i].entries[j].textfield << endl;
       cout << pages[i].entries[j].xlocation << ", ";
       cout << pages[i].entries[j].ylocation << endl;
    }
}


void notebook::addentry(){
    int pgnum = getpgnum();
    cout << pgnum << endl;
    entry newentry;
    getentry(newentry);
    if (pgnum <= num_pages)
        addentry(newentry, pgnum);
    else
        pagenumber(pgnum);
        addentry(newentry, pgnum);
}


void notebook::pagenumber(int pgnum){
    do {
        num_pages += 1;
        page temp[num_pages];
        for (int i = 0; i <(num_pages - 1); i++){
            temp[i] = pages[i];
        }
        delete [] pages;
        pages = temp;
        page newpage;
        newpage.page_number = pgnum;
        pages[num_pages - 1] = newpage;
    }
    while (num_pages <= pgnum);
}


void notebook::addentry(entry& newentry, int pgnum){
    pages[pgnum - 1].num_entries += 1;
    entry temp[pages[pgnum - 1].num_entries];
    for (int i = 0; i < (pages[pgnum - 1].num_entries - 1); i++){
        temp[i] = pages[pgnum - 1].entries[i];
    }
    delete [] pages[pgnum].entries;
    pages[pgnum - 1].entries = temp;
    pages[pgnum - 1].entries[pages[pgnum -1].num_entries - 1] = newentry ;
}


void notebook::io (char field[]) {
    int size = sizeof(field);
    cin.get(field, size);
    cin.ignore(size, '\n');
}

void notebook::getentry(entry& newentry){
    char * temp;
    temp = new char [100];
    cin.get(temp, 100);
    cin.ignore(100, '\n');
    cout << temp << endl;
    /*//char * temp;
    //temp = new char [100];
    //char lies[100];
    //cout << "Name of entry: " << endl;
    //io(temp);
    //io(lies);
 //   cin.get(lies, 100, '\n');
  //  cin.ignore(100, '\n' );
    //while(cin.get() != '\n');
   // cout << temp << endl;

   // cout << lies << endl;
    //cin.ignore(100, '\n');
    //getline (cin, temp);
    int len = strlen(temp);
    newentry.name = new char[len];
    for (int i = 0; i < len; i++){
        newentry.name[i] = temp[i];
    }
    cout << newentry.name << endl;
    char * lasers;
    lasers = new char [len];
    strcpy(lasers, temp);
    cout << lasers << endl;
    delete [] temp;
    temp = new char [100];
    cout << "Text of entry: " << endl;
    cin.get(temp, 100);
    cin.ignore(100, '\n');
    //getline (cin, temp);
    len = strlen(temp);
    newentry.textfield = new char[len];
    for (int i = 0; i < len; i++){
        newentry.name[i] = temp[i];
    }
    delete [] temp;
    cout << "What type of file is it?" << endl;
    cout << "Eg: Text, Web Link, .pdf file" << endl;
    cout << "Filetype: " << endl;
    temp = new char [100];
    cin.get(temp, 100);
    cin.ignore(100, '\n');
    //getline (cin, temp);
    len = strlen(temp);
    newentry.type = new char[len];
    for (int i = 0; i < len; i++){
        newentry.name[i] = temp[i];
    }
    delete [] temp;
    cout << "What location in the page is it?" << endl;
    cout << "Answer the question in terms of cartesian coordinates where the origin is the upper left corner." << endl;
    float ycoord, xcoord;
    cout << "Enter thine y coordinate: ";
    cin >> ycoord;
    newentry.ylocation = ycoord;
    cout << "Enter thine x coordinate: ";
    cin >> xcoord;
    newentry.xlocation = xcoord;
*/
}

int notebook::getpgnum(){
    cout << "What page number would you like to add to(The first page is page 1 of course): ";
    int p;
    cin >> p;
    return p;
}
/*
int ::extend (){
    index_size += 1;
    file temp[index_size];
    for (int i = 0; i < (index_size - 1); i++){
        temp[i] = my_index[i];
    }
    delete [] my_index;
    my_index = temp;
    my_index[index_size - 1] = addedfile ;
    return 1;
}

void index::find (char name[]){
    cout << "The following files match your search" << endl;
    for (int i = 0; i < index_size; i++){
       if (my_index[i].comparefilename(name))
          my_index[i].displayfile();
    } 
}

void index::display(){
    for (int i = 0; i < index_size; i++){
        my_index[i].displayfile();
    }
}
*/

