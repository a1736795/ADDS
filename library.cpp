//libraryclass.cpp
#include "library.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//constructor - create the library
Library::Library()
{  
   Book lotr;
   lotr.setTitle("clifford");
   lotr.setAuthor("Norman Bridwell");
   lotr.setGenre(Genre::fiction);
   //lotr.setDate("1954");
   lotr.setISBN("1111", "1111", "1111", "J");
   addNewBook(lotr);

   Book hp;
   hp.setTitle("Harry Potter");
   hp.setAuthor("J.K Rowling");
   hp.setGenre(Genre::children);
   //hp.setDate("1997");
   hp.setISBN("22", "345", "7890", "8");
   addNewBook(hp);
}

//deconstructor
Library::~Library() {}

//add a new book and push it into the vector
void Library::addNewBook(Book& addBook)
{
   v_books.push_back(addBook);
}
