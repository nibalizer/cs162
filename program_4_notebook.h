// Spencer Krum
// CS162
// Karla Fant
// Program 4
// DBAD License
// Nov 29, 2010


struct entry{
    char * name;
    char * text;
    int type;
    float xloc;
    float yloc;
};

struct page{
    entry **entries;
    int num_entries;
};

class notebook {
    public:
        notebook();
        void add();
        void print();
    private:
        void addpages();
        void addentry();
        page ** pages;
        int num_pages;
};
