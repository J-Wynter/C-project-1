#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "Book.h"


using namespace std;


    int main() {

    ifstream inputFile;
    inputFile.open("/Users/joshuawynter/Desktop/C++/library_books.csv");

     vector<Book> books;

    string line = "";
    while (getline(inputFile, line)) {
               
        int bookId;
        string bookName;
        int pageCount;
        string authorFirstName;
        string authorLastName;
        string BookType;
        string tempString = "";

        stringstream inputString(line);
        
        getline(inputString, tempString, ',');
        bookId = atoi(tempString.c_str());
                getline(inputString, bookName, ',');
                        getline(inputString, tempString, ',');
                        pageCount = atoi(tempString.c_str());
                                getline(inputString, authorFirstName, ',');
                                        getline(inputString, authorLastName, ',');


Book book(bookId, bookName, authorFirstName, authorLastName, BookType);
books.push_back(book);


        line = "";
    }
    //return 0;
};
