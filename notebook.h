// Spencer Krum
// CS162
// Karla Fant
// Program 4/5
// DBAD License
// Nov 29, 2010


struct entry {
    char * name;
    char * type;
    char * textfield;
    float xlocation;
    float ylocation;
};

struct page {
    entry * entries;
    int page_number;
    int num_entries;
};


class notebook{
    public:
        notebook();
        void print();
        void print(int i);
        void find(char name[]);
        void io(char field[]);
        void getentry(entry& newentry);
        void addentry();
        void addentry(entry& newentry, int pgnum);
        void pagenumber(int pgnum);
        void display();
//        int extend(file& addedfile); 

    private:
        int getpgnum();
        entry getentry();
        page * pages;
        int num_pages;
};
