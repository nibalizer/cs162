// Spencer Krum
// CS162
// Karla Fant
// Program 3
// DBAD License
// Oct 23, 2010

class index {
    public:
        index();
        void find(char name[]);
        void display();
        int extend(file& addedfile); 

    private:
        file * my_index;
        int index_size;
};
