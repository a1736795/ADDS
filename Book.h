#include <iostream>
#include <string>
#include <vector>
using namespace std;

#ifndef _BOOK_H_
#define _BOOK_H_


//class Book
class Book
{
public:
   Book();
   ~Book();

   Genre getGenre() const { return m_genre; }
   string getISBN() const { return m_isbn; }
   string getTitle() const { return m_title; }
   string getAuthor() const { return m_author; }
   int getDate() const { return m_date; }
   bool getStatus() const { return m_checkedOut; }

   void setGenre(Genre genre) { m_genre = genre; }
   void setISBN(string num1, string num2, string num3, string char1);
   void setTitle(string title) { m_title = title; }
   void setAuthor(string author) { m_author = author; }
   void setDate(string year);
   void setStatus(bool status) { m_checkedOut = status; }

   void checkBookOut() { m_checkedOut = true; };
   void checkBookIn() { m_checkedOut = false; };

private:
   //m_ prefix to denote member variable
   string m_isbn, m_title, m_author;
   int m_date;
   bool m_checkedOut;
};

//overloads
bool operator==(const Book& a, const Book& b);
bool operator!=(const Book& a, const Book& b);
ostream& operator<<(ostream& os, const Book& book);
#endif // !_BOOKCLASS_H_
