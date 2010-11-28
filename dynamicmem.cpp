
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
    dynamic.cstring = new char [21];
    numbers = new int [5];
    cin.get(dynamic.cstring, 21, '\n');
    cin.ignore(21, '\n');
    cout << dynamic.cstring << endl;     
    return 0;
}
