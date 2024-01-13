#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Book.h"
#ifndef LIBRARIAN_H
#define LIBRARIAN_H


using namespace std;

class Librarian : public Person 
{
    private:
    int staffid;
    int salary;
   
    public:
    Librarian(int staffid, int salary) 
        : Person("name","email","address"), staffid(0), salary(0) {}


        void addMember(){

        };
        void issueBook(int memberID, int bookID){

        };

        void returnBook(int memberID, int bookID){

        };
        void displayBorrowedBooks(int memberID){
            
        };
        
        void calcFine(int memberID){
            

        }
        int getStaffID(){

            return staffid;
        };
        int setStaffID(int staffid){

        };
        int getSalary(){
            return salary;
        };
        
        int setSalary(int salary){

        };

     
};

    

    #endif