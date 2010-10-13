// Spencer Krum
// CS162
// Karla Fant
// Program 1
// DBAD License
// Oct 12, 2010

// Algorithim
// I. The program states its name and function.
// II.


using namespace std;

void intro();
int selecttype();


void truefalse(void);
void multiplechoice(void);
void shortanswer(void);


typedef void (*Handler)(void);
Handler jump_table[3] =
    {truefalse,
    multiplechoice,
    shortanswer};


void truefalse(void){
    cout << "Please enter a true or false question" << endl;
}
void multiplechoice(void){
    cout << "Please enter a multliple choice question" << endl;
}
void shortanswer(void){
    cout << "Please enter a short answer question" << endl;
   }




int selecttype(){
    int i = 0;
    while(true){
        cout << "This program can produce three types of questions.\n";
        cout << "1. True or False" << endl;
        cout << "2. 4 response multiple choice" << endl;
        cout << "3. Short answer" << endl;
        cout << "At the prompt below, please enter the number corresponding to desired type." << endl;
        cout << "Type: ";
        cin >> i;
        if (1 >= i && i >= 3){
            cout << "Please input a number from above" << endl;
            continue;
        }
        else 
            break;
    }
    return i;
}

void intro(){
    cout << "CS 162 Program 1" << endl;
    cout << "Prototype survey application" << endl;
}
