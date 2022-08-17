// Include the required header files.
#include "Document.h"

// Define the constructor.
Document::Document(string t , string d, int n): _title{t}, _documentType{d}, _numPages{n}{
	

}

// Define the member functions.

void Document:: set_documentType(string d){

    _documentType=d;

}

void Document:: set_numPages(int n){

    _numPages=n;

}

int Document:: get_numPages(){

    return _numPages;

}

string Document::get_documentType(){

    return _documentType;

}
