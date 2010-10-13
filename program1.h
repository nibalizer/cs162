// Spencer Krum
// CS162
// Karla Fant
// Program 1
// DBAD License
// Oct 12, 2010

// Algorithim
// I. The program states its name and function.
// II.


void intro();
void selecttype();


typedef void (*Handler)(void);

void truefalse(void);
void multiplechoice(void);
void shortanswer(void);


int selecttype(){
    cout << "This program can produce three types of questions.\n";
    cout << "1. True or False" << endl;
    cout << "2. 4 response multiple choice" endl;
    cout << "3. Short answer" << endl;
    cout << "At the prompt below, please enter the number corresponding to desired type." << endl;
    cout << "Type:";
    int i;
    cin >> i;
    return i;
}

void intro(){
    cout << "CS 162 Program 1" << endl;
    cout << "Prototype survey application" << endl;
}
