// Spencer Krum
// CS162
// Karla Fant
// Program 1
// DBAD License
// Oct 12, 2010


#include <iostream>
#include "program1.h"


using namespace std;



int main () {
    intro();
    while (true){
    int i = selecttype();

    jump_table[i-1]();
    }
    return 0;

}

