#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "Book.cpp"


using namespace std;


    int main() {
    string filename;
    cout << "Enter the CSV filename: ";
    cin >> filename;

    vector<Book> books = readBooksFromCSV(filename);

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



    int inputBookID;
    cout << "Enter Book ID to search: ";
    cin >> inputBookID;

    for (const auto& book : books) {
        if (stoi(book.getbookID()) == inputBookID) {
            cout << "Book Name: " << book.getbookName() << endl;
            cout << "Author First Name: " << book.getAuthorFirstName() << endl;
            cout << "Author Last Name: " << book.getAuthorLastName() << endl;
            cout << "Page Count: " << book.getPageCount() << endl;
            break;
        }
    }



    // Process the vector of books as needed

    return 0;
}