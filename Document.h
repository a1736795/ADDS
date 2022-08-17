#ifndef DOCUMENT_H
#define DOCUMENT_H

// Include the required header files.

#include<iostream>

using namespace std;

// Define the class.
class Document{
	protected:
        string addDocument;
        string hasDocument;
        int _numPages;
	public:
		// Declare the constructor.
		Document(string t , string d, int n);
		
		//Define the pure virtual function.
		virtual int getDocumentID() = 0;

		// Declare the member functions.
		void set_addDocument(string t);
		void set_hasDocument(string d);
		int get_numPages();
        string get_hasDocument();
};
#endif
