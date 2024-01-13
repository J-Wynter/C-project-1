#ifndef MEMBERS_H
#define MEMBERS_H
#include "Person.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "Librarian.h"


using namespace std;

class Book;

class Members : public Person {
private:
    int memberID;
    vector<Book> booksLoaned;

public:
Members() : memberID(0) {}
    Members(int memberID, const string& name, const string& address, const string& email)
        : Person(name, address, email), memberID(memberID) {}

    int getMemberID() const {
        return memberID;
    }

    vector<Book> getBooksBorrowed() const {
        return booksLoaned;
    }

    void setBooksBorrowed(const Book& book) {
        booksLoaned.push_back(book);
    }
};

#endif