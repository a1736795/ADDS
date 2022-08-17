#include <iostream>
#include <string>
#include <vector>
#include "book.h"

//compare ISBN numbers
bool operator==(const Book& a, const Book& b)
{
   return a.getISBN() == b.getISBN();
}

bool operator!=(const Book& a, const Book& b)
{
   return a.getISBN() != b.getISBN();
}

//print out book
ostream& operator<<(ostream& os, const Book& book)
{
   string genre;
   switch (book.getGenre())
   {
   case Genre::fiction:
       genre = "Fiction";
       break;
   case Genre::nonfiction:
       genre = "Non-Fiction";
       break;
   case Genre::biography:
       genre = "Biography";
       break;
   case Genre::children:
       genre = "Children";
       break;
   default:
       genre = "Default";
       break;
   }
   return os << "Title: "   << book.getTitle() << endl
           << "Author: "       << book.getAuthor() << endl
           << "Genre: "   << genre << endl
           << "Copyright: " << book.getDate() << endl
           << "ISBN: "       << book.getISBN() << endl
           << "Checked out:" << book.getStatus() << endl
           << endl;
}

//constructor
Book::Book()
{
   //m_genre = Genre;
   m_isbn = m_title = m_author = "";
   m_date = 0;
   m_checkedOut = false;
}

//deconstructor
Book::~Book() {}

//set the ISBN
void Book::setISBN(string num1, string num2, string num3, string char1)
{
   size_t check;
   //check first number
   check = num1.find_first_not_of("0123456789");
   while (check != string::npos)
   {
       cout << "Not a valid ISBN number, try again: ";
       cin >> num1;
       check = num1.find_first_not_of("0123456789");
   }

   //check second number
   check = num2.find_first_not_of("0123456789");
   while (check != string::npos)
   {
       cout << "Not a valid ISBN number, try again: ";
       cin >> num2;
       check = num2.find_first_not_of("0123456789");
   }

   //check third number
   check = num3.find_first_not_of("0123456789");
   while (check != string::npos)
   {
       cout << "Not a valid ISBN number, try again: ";
       cin >> num3;
       check = num3.find_first_not_of("0123456789");
   }

   //check last character
   check = char1.find_first_not_of("0123456789ABCDEFGHIJKLMNOPQRSTUVWXY");
   while (check != string::npos)
   {
       cout << "Not a valid ISBN digit or letter, try again: ";
       cin >> char1;
       check = char1.find_first_not_of("0123456789ABCDEFGHIJKLMNOPQRSTUVWXY");
   }

   //set isbn
   m_isbn = "";
   m_isbn.append(num1);
   m_isbn.append("-");
   m_isbn.append(num2);
   m_isbn.append("-");
   m_isbn.append(num3);
   m_isbn.append("-");
   m_isbn.append(char1);
}
