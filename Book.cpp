#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Book.h"
#include "Members.h"
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

