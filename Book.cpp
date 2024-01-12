#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Book.h"
#include "Member.h"
using namespace std;


vector<Book> readBooksFromCSV(const string& filename) {
    vector<Book> books;

    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return books;
    }

    string line;
    getline(file, line); // Skip header line

   while (getline(file, line)) {
    istringstream iss(line);
    string token;
    vector<string> tokens;

    // Improved Parsing Logic
    bool insideQuotes = false;
    string field;
    for (char c : line) {
        if (c == '"') {
            insideQuotes = !insideQuotes;
        } else if (c == ',' && !insideQuotes) {
            tokens.push_back(field);
            field.clear();
        } else {
            field.push_back(c);
        }
    }
    tokens.push_back(field); // Add the last field

    // Create Book instance from tokens
    if (tokens.size() == 6) {
        try {
            int bookID = stoi(tokens[0]);
            string bookName = tokens[1];
            int pageCount = stoi(tokens[2]);
            string authorLastName = tokens[3];
            string authorFirstName = tokens[4];
            string bookType = tokens[5];

            Book book(bookID, bookName, pageCount, authorLastName, authorFirstName, bookType);
            books.push_back(book);
        } catch (const std::invalid_argument& e) {
            cerr << "Conversion error on line: " << line << " - " << e.what() << endl;
        }
    } else {
        cerr << "Invalid CSV line: " << line << endl;
    }
}

    file.close();
    return books;
}

int main() {
    string filename;
    cout << "Enter the CSV filename: ";
    cin >> filename;

    vector<Book> books = readBooksFromCSV(filename);

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