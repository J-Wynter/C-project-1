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
    while (getline(file, line)) {
        istringstream iss(line);
        string token;

        // Parse CSV line into tokens
        vector<string> tokens;
        while (getline(iss, token, ',')) {
            tokens.push_back(token);
        }

        // Create Book instance from tokens
        if (tokens.size() == 7) { // Ensure all fields are present
            int bookID = stoi(tokens[0]);
            string bookName = tokens[1];
            string authorLastName = tokens[2];
            string authorFirstName = tokens[3];
            string bookType = tokens[4];
          

            Book book(bookID, bookName, authorLastName, authorFirstName, bookType);
            books.push_back(book);
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

    // Process the vector of books as needed

    return 0;
}