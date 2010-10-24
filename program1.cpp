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
    char resp1[400];
    char resp2[400];
    char resp3[400];
    char resp4[400];
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
    char again;
    truefalse_ question;
    while (again != 'y'){
        cout << "Please enter a true or false question" << endl;
        cout << "Type: ";
        cin.get(question.question, 400);
        cin.ignore();
        cout << "Please tell us the correct response." << endl;
        cout << "Type: ";
        cin.get(question.resp, 30);
        cin.ignore();
        cout << "Are the following correct?" << endl;
        cout << "Question: " << question.question << endl;
        cout << "Answer: " << question.resp << endl;
        cout << "Type(y/n): "; 
        cin >> again;
        cin.ignore();
    }
}
void multiplechoice(void){
    char again;
    multiplechoice_ question;
    while (again != 'y'){
        cout << "Please enter a 4 response multliple choice question" << endl;
        cout << "Type: ";
        cin.get(question.question, 400);
        cin.ignore();
        cout << "Please tell us response #1." << endl;
        cout << "Type: ";
        cin.get(question.resp1, 400);
        cin.ignore();
        cout << "Please tell us response #2." << endl;
        cout << "Type: ";
        cin.get(question.resp2, 400);
        cin.ignore();
        cout << "Please tell us response #3." << endl;
        cout << "Type: ";
        cin.get(question.resp3, 400);
        cin.ignore();
        cout << "Please tell us response #4." << endl;
        cout << "Type: ";
        cin.get(question.resp4, 400);
        cin.ignore();
        cout << "Are the following correct?" << endl;
        cout << "Question: " << question.question << endl;
        cout << "Answer: " << question.resp1 << endl;
        cout << "Answer: " << question.resp2 << endl;
        cout << "Answer: " << question.resp3 << endl;
        cout << "Answer: " << question.resp4 << endl;
        cout << "Type(y/n): "; 
        cin >> again;
        cin.ignore();
    }
}
void shortanswer(void){
    char again;
    shortanswer_ question;
    while (again != 'y'){
        cout << "Please enter a short answer question" << endl;
        cout << "Type: ";
        cin.get(question.question, 400);
        cin.ignore();
        cout << "Please tell us the correct response." << endl;
        cout << "Type: ";
        cin.get(question.resp, 30);
        cin.ignore();
        cout << "Are the following correct?" << endl;
        cout << "Question: " << question.question << endl;
        cout << "Answer: " << question.resp << endl;
        cout << "Type(y/n): "; 
        cin >> again;
        cin.ignore();
    }
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
