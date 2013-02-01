
#include <iostream>
using namespace std;


int main()
{
    char username[20]; //initialize a character array to store username
    cout << "Who's awesome?\n" << "Enter your name: "; //prompt for name
    cin.get(username,20,'\n') //read in username until '\n' or 20 char, whichever is first
    cout << username <<", you're awesome!\n" << endl; //tell the user they're awesome!
    return 0;
}

