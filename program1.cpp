// Spencer Krum
// CS162
// Karla Fant
// Program 1
// DBAD License
// Oct 12, 2010


#include <iostream>
#include "program1.h"


using namespace std;

struct truefalse_ {
    char question[400];
    int correct;
};

struct multiplechoice_  {
    char question[400];
    char resp[4][400];
    int correct;
};

struct shortanswer_  {
    char question[400];
    char resp[400];
    char correct[400];
};


int main () {
    intro();
    while (true){
    int i = selecttype();

    jump_table[i-1]();
    }
    return 0;

}

