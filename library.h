#include <iostream>
#include <string>
#include <vector>
using namespace std;
#ifndef _LIBRARY_H_
#define _LIBRARY_H_

#include "book.h"

//library class
class Library
{
public:
   Library();
   ~Library();
  
   void checkOutBook(string isbn, int cardNum);
   void printFeesOwed();
   void printLibrary();

private:
   void addNewBook(Book& addBook);
   void checkForBook(string isbn);
   void checkForPatron(string isbn, int cardNum);

private:
   struct Transaction
   {
       Book c_book;
       //Date c_date;
   };
   Transaction transaction;

   //vectors
   vector<Book> v_books;
   vector<Transaction> v_transactions;
};

//overloads


#endif
