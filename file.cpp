// Spencer Krum
// CS162
// Karla Fant
// Program 3
// DBAD License
// Oct 23, 2010

#include "file.h"

using namespace std;

file::file(){
    filename[0] = '\n';
    location[0] = '\n';
    date[0] = '\n';
}

int file::readfile(){
    cout << "Please enter new file info below:" << endl;
    cout << "File name: "; 
    cin.get(filename, 20, '\n');
    cin.ignore(20, '\n');
    cout << "File Location: ";
    cin.get(location, 20, '\n');
    cin.ignore(20, '\n');
    cout << "File date: ";
    cin.get(date, 20, '\n');
    cin.ignore(20, '\n');
    return 0;
}

int file::displayfile(){
    cout << "This File's properties are" << endl;
    cout << "Filename: " << filename << endl;
    cout << "Location: " << location << endl;
    cout << "Date: " << date << endl;
    return 0;

}

int file::comparefilename(char name[]){
    if (name == filename)
        return 1;
    else
        return 0;
}

