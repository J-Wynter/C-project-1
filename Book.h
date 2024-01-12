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
    string authorFirstName;
    string bookType;
    int dueDate;
    Member borrower;
    
public:
Book(int bookID, string bookName, string authorLastName, string authorFirstName, string bookType)
    : bookID(bookID), bookName(bookName), authorLastName(authorLastName), authorFirstName(authorFirstName), bookType(bookType)
{}


    
    string getbookID(int bookID){
        string bookIDstring = to_string(bookID);
        return bookIDstring;
    };
    
    string getbookName(){
        return bookName;
    };
    
    string getAuthorFirstName(){
        return authorFirstName;
    };
    
    string getAuthorLastName(){

        return authorLastName;

    };

    int getDueDate(){

    };
    
    void setDueDate(int dueDate){

    };

    void returnBook(){

    };
    
    void borrowBook(Member borrower, int dueDate){

    };


};

#endif