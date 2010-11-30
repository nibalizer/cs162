// Spencer Krum
// CS162
// Karla Fant
// Program 3
// DBAD License
// Oct 23, 2010

//#include "file.cpp"
#include "index.h"

index::index (){
   my_index = NULL; 
   index_size = 0;

}

int index::extend (file& addedfile) {
    index_size += 1;
    file temp[index_size];
    for (int i = 0; i < (index_size - 1); i++){
        temp[i] = my_index[i];
    }
    delete [] my_index;
    my_index = temp;
    my_index[index_size - 1] = addedfile ;
    return 1;
}

void index::find (char name[]){
    cout << "The following files match your search" << endl;
    for (int i = 0; i < index_size; i++){
       if (my_index[i].comparefilename(name))
          my_index[i].displayfile();
    } 
}

void index::display(){
    for (int i = 0; i < index_size; i++){
        my_index[i].displayfile();
    }
}
