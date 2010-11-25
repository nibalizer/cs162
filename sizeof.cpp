#include <iostream>

using namespace std;

void io (char field[]) {
    int t = sizeof(field);
    cin.get(field, t);
    cin.ignore();
}

int main() {
    char a;
    cout << sizeof(a) << endl;
    char b[10];
    cout << sizeof(b) << endl;
    int t = (sizeof(b)/sizeof(a));
    cout << t << endl;
   
    
    cin.get(b, t);
    cin.ignore();
    cout << b << endl;

    char p[50];

    io(p);
    cout << p << endl;
    char d[50];

    io(d);
    cout << d << endl;
    char c[50];

    io(c);
    cout << c << endl;
    return 0;
}
