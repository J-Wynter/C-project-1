#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Book.h"
#include "Person.h"


#include "Person.h"  // Assuming your header file is named "Person.h"

int main() {
    // Creating a Person instance using the constructor
    Person person1("John Doe", "123 Main St", "john.doe@example.com");

    // Accessing and printing information using member functions
    cout << "Person 1 Information:" << endl;
    cout << "Name: " << person1.getName() << endl;
    cout << "Address: " << person1.getAddress() << endl;
    cout << "Email: " << person1.getEmail() << endl;

    // Creating another Person instance and setting information using member functions
    Person person2("", "", "");
    person2.setName();
    person2.setAddress();
    person2.setEmail();

    // Accessing and printing the updated information
    cout << "\nPerson 2 Information:" << endl;
    cout << "Name: " << person2.getName() << endl;
    cout << "Address: " << person2.getAddress() << endl;
    cout << "Email: " << person2.getEmail() << endl;

    return 0;
}
