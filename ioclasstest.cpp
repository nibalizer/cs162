// Spencer Krum
// CS162
// Karla Fant
// Program 4/5
// DBAD License
// Nov 29, 2010

#include <iostream>
using namespace std;
void io (char field[]);

class testing {
    public:
       void cio ();
       void classout ();
    private:
};

void testing::classout (){
//    cout << temp << endl;
}
void testing::cio () {
    char * temp;
    temp = new char [100];
    cin.get(temp, 100);
    cin.ignore(100, '\n');
    cout << temp << endl;
}

int main(){
    char * temp;
    temp = new char [100];
    io(temp);
    cout << temp << endl;
    cout << "classtest now" << endl;
    testing mondo;
    mondo.cio();
    mondo.classout();

}

void io (char field[]) {
    int size = sizeof(field);
    cin.get(field, size);
    cin.ignore(size, '\n');
}
