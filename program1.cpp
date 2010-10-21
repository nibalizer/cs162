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
    char resp[30];
};

struct multiplechoice_  {
    char question[400];
    char resp[4][400];
    int correct;
};

struct shortanswer_  {
    char question[400];
    char resp[400];
};

typedef void (*Handler)(void);
Handler jump_table[3] =
    {truefalse,
    multiplechoice,
    shortanswer};


int main () {
    intro();
    while (true){
    int i = selecttype();
    jump_table[i-1]();
    }
    return 0;

}


void truefalse(void){
    char again[30];
    truefalse_ question;
    while (again != "yes"){
        cout << "Please enter a true or false question" << endl;
        cout << "Type: " << endl;
        cin.get(question.question, 400);
        cin.ignore();
        //cin.get();
        cout << "Please tell us the correct response. Enter 1 for True and 0 for false." << endl;
        cout << "Type: ";
        cin.get(question.resp, 30);
        cin.ignore();
        cout << "Are the following correct?" << endl;
        cout << "Question: " << lasers<< endl;
        if ((question.resp == "True") || (question.resp == "true"))
            cout << "Answer: True" << endl;
        else
            cout << "Answer: False" << endl;
        cout << "Type: "; 
        cin.get(again, 30);
        cin.ignore();
    //cout << "Hi" << endl;
    }
}
void multiplechoice(void){
    cout << "Please enter a multliple choice question" << endl;
}
void shortanswer(void){
    cout << "Please enter a short answer question" << endl;
   }




int selecttype(){
    int i;
    cout << "This program can produce three types of questions.\n";
    cout << "1. True or False" << endl;
    cout << "2. 4 response multiple choice" << endl;
    cout << "3. Short answer" << endl;
    cout << "At the prompt below, please enter the number corresponding to desired type." << endl;
    while (true) {

        cout << "Type: ";
        cin >> i;
        cin.ignore(100, '\n');
        if (i == 1)
            break;
        if (i == 2)
            break;
        if (i == 3)
            break;
        cout << "Please input a number from above" << endl;
    }
    cout << "made it" << endl;
    return i;
}

void intro(){
    cout << "CS 162 Program 1" << endl;
    cout << "Prototype survey application" << endl;
}
