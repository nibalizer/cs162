// Spencer Krum
// CS162
// Karla Fant
// Program 1
// DBAD License
// Oct 12, 2010

// Algorithim
// I. The program states its name and function.
// II.

#include <string> 

using namespace std;

void intro();
int selecttype();


void truefalse(void);
void multiplechoice(void);
void shortanswer(void);

struct truefalse_ {
    string question;
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
typedef void (*Handler)(void);
Handler jump_table[3] =
    {truefalse,
    multiplechoice,
    shortanswer};


void truefalse(void){
    string again = "no";
    while (again != "yes"){
         //truefalse_ item;
        string lasers;
        string maser;
        cout << "Please enter a true or false question" << endl;
        cout << "Type: ";
       // cin.get(item.question, 400, '\n');
       //cin.get();
       // while (cin.get() != '\n');
        //item.question = "What are eyes?";
        getline (cin, lasers);
        //cin.get();
        cout << "Please tell us the correct response. Enter 1 for True and 0 for false." << endl;
        cout << "Type: ";
        getline (cin, maser);
        cout << "Are the following correct?" << endl;
        cout << "Question: " << lasers<< endl;
        if (maser == "1") 
            cout << "Answer: True" << endl;
        else
            cout << "Answer: False" << endl;
        cout << "Type: "; 
        getline (cin, again);
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
    cout << "3.. Short answer" << endl;
    cout << "At the prompt below, please enter the number corresponding to desired type." << endl;
    while (true) {

        cout << "Type: ";
        cin >> i;
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
