#include<iostream>
struct Book {
  const char * title;
  const char * author;
};
struct Lib {
  size_t books;
  const Book * const * lib;
  const size_t * counts;
  const size_t * stocks;
};
const Book ** same_author(
  size_t& out, // размер массива-рSAAAезультата
  const Lib & db, // библиотека для поиска
  const Book* book // книга-образец (из неё нужен автор)
){
    out = 0;
    const char * name = book -> author;
    const Book * const * books_inlib = db.lib;
    for (size_t i = 0; i < db.books; i++ ){
        const Book * tmp_book = db.lib[i];
        if (*tmp_book->author == *name){
            out++;
        }
    }
    size_t j = 0;
    const Book ** answer = nullptr;
    try{
        answer = new const Book*[out];
        for (size_t i = 0; i < db.books; i++ ){
            const Book * tmp_book = db.lib[i];
            if (*tmp_book->author == *name){
                answer[j] = tmp_book;
                j++;
            }
        }
        return answer;
    }
    catch(...){
        throw nullptr;
        delete[] answer;
    }
}

int main(){
    int a = 4;
    int n = 4;
    int* a1 = &a;
    int* n1 = &n;
    bool d = a1 == n1;
    std :: cout << "pisechki popochki" << '\n';
}