
#include <iostream>

using namespace std;

struct dynamics {
    char * cstring;
    int * numbers;
};


int main(){
    dynamics dynamic;
    char * cstring;
    int * numbers;
    cstring = new char [21];
    numbers = new int [5];
    cin.get(cstring, 21, '\n');
    cin.ignore(21, '\n');
    cout << cstring << endl;
    char temp[21];
    //temp = *cstring;
   // strcopy(temp, cstring)
    cstring = new char [80];
    //cstring = temp;
    cin.get(cstring, 80, '\n');
    cin.ignore(80, '\n');
    cout << cstring << endl;
    char * bstring;
    bstring = new char [80];
    cin.get(bstring, 80, '\n');
    cin.ignore(80, '\n');
    cout << bstring << endl;
    int same = 1; 
    for (int i = 0; i < 80; i++){
        if (cstring[i] != bstring[i]){
            same = 0;
        }
    }
    if (same)
        cout << "Yep" << endl;
    else
        cout << "Nope" << endl;
    return 0;
}
