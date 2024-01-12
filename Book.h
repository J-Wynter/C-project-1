#ifndef BOOK_H
#define BOOK_H


#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <ctime>
#include "Member.h"




using namespace std;


class Book: public Member {
private: 
    int bookID;
    string bookName;
    string authorLastName;
    int pageCount;
    string authorFirstName;
    string bookType;
    int dueDate;
    Member borrower;
    
public:
Book(int bookID, string bookName, int pageCount, string authorLastName, string authorFirstName, string bookType)
    : bookID(bookID), bookName(bookName), pageCount(pageCount), authorLastName(authorLastName), authorFirstName(authorFirstName), bookType(bookType)
{}


    
    string getbookID(int bookID)const{
        string bookIDstring = to_string(bookID);
        return bookIDstring;
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
    
    void borrowBook(Member borrower, int dueDate){

    };


};

#endif