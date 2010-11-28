// Spencer Krum
// CS162
// Karla Fant
// Program 3
// DBAD License
// Oct 23, 2010


class file{
    public:
        file();
        int readfile();
        int displayfile();
        int comparefilename(char name[]);

    private:
        char filename[20];
        char location[20];
        char date[20];

};
