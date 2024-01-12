#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#ifndef PERSON_H
#define PERSON_H

using namespace std;


class Person{

private:
    string name;
    string address;
    string email;
    
public:
    Person() : name(""), address(""), email("") {}
    Person(string name, string address, string email) 
        : name(name), address(address), email(email) {}
    
    void setName() {
        cout << "enter name: " << endl;
        getline(cin, name);
        cout << "name is: " << name;
    };
    string getName() const {
        cout << "Name: " << name << endl;

        return name;


};
void setAddress() {
       cout << "enter address: " << endl;
        getline(cin, address);
        cout << "address is: " << address;
    };

     string getAddress() { cout << "Address: " << address << endl;
     return address;

};

void setEmail(){ 
    string userEmail;
    cout << "enter email: " << endl;
    getline(cin, userEmail);
    cout << "entered email is: " << userEmail << endl;
};

    
    string getEmail() { cout << "Email: " << email << endl;
return email;

};
};



#endif 