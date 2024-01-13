#ifndef BOOK_H
#define BOOK_H


#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <ctime>
#include "Members.h"
#include "Members.cpp"



using namespace std;


class Book: public Members {
private: 
    int bookID;
    string bookName;
    string authorLastName;
    int pageCount;
    string authorFirstName;
    string bookType;
    int dueDate;
    string borrower;
    
public:
Book(int bookID, string bookName, int pageCount, string authorLastName, string authorFirstName, string bookType)
    : bookID(bookID), bookName(bookName), pageCount(pageCount), authorLastName(authorLastName), authorFirstName(authorFirstName), bookType(bookType)
{}


    
    string getbookID()const{
        return to_string(bookID);
    };
    
    string getbookName()const{
        return bookName;
    };
    
    string getAuthorFirstName()const{
        return authorFirstName;
    };
    
    string getAuthorLastName() const{

        return authorLastName;

    };
   int getPageCount() const {
        return pageCount;
    }

    int getDueDate(){

    }
    
    void setDueDate(int dueDate){

    };

    void returnBook(){

    };
    
    void borrowBook(string borrower, int dueDate){

    };


};

#endif