#include <iostream>

using namespace std;

int main(){
    cout << "Please enter things" << endl;
    char name[35];
    char name2[35];
    char name1[35];
    cin.get(name, 35);
    cin.ignore();
    cin.get(name1, 35);
    cin.ignore();
    cin.get(name2, 35);
    cin.ignore();
    cout << name << endl;
    cout << name1 << endl;
    cout << name2 << endl;
    name1 = "lasers";
    cout << name1 << endl;
    return 0;
}
