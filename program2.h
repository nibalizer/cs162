// Spencer Krum
// CS162
// Karla Fant
// Program 2
// DBAD License
// Oct 23, 2010

// Algorithim
// I. The program states its name and function.
// II.

struct product_db {
    char shortname[60];
    char url[500];
    float price;
    char criterion1[80];
    char criterion2[80];
    char criterion3[80];
};

struct baseline_info {
    char productname[80];
    char criterion1[80];
    char criterion2[80];
    char criterion3[80];
    int weight1;
    int weight2;
    int weight3;
    float maxprice;
    int numfields;
};

void intro();
int selecttype();
void magickarlafreecode();
void baseline(baseline_info&);
void io (char field[]);
void addproduct(product_db product[], int i);
void displayitem(product_db product);
