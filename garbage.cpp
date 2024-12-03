#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

// Book structure to store information about a book
struct Book {
    string title;
    string author;
    string isbn;
    bool isCheckedOut;

    // Constructor to initialize the book
    Book(string t, string a, string i, bool c = false)
        : title(t), author(a), isbn(i), isCheckedOut(c) {}

    // Display information about the book
    void display() const {
        cout << left << setw(30) << title
             << setw(25) << author
             << setw(15) << isbn
             << (isCheckedOut ? "Checked Out" : "Available") << endl;
    }
};

// Library class to manage a collection of books
class Library {
private:
    vector<Book> books;

public:
    // Add a book to the library
    void addBook(const Book& book) {
        books.push_back(book);
    }

    // Check out a book by ISBN
    bool checkOutBook(const string& isbn) {
        for (auto& book : books) {
            if (book.isbn == isbn && !book.isCheckedOut) {
                book.isCheckedOut = true;
                cout << "You have checked out: " << book.title << endl;
                return true;
            }
        }
        cout << "Sorry, the book is either not found or already checked out." << endl;
        return false;
    }

    // Return a book by ISBN
    bool returnBook(const string& isbn) {
        for (auto& book : books) {
            if (book.isbn == isbn && book.isCheckedOut) {
                book.isCheckedOut = false;
                cout << "You have returned: " << book.title << endl;
                return true;
            }
        }
        cout << "Sorry, the book was not checked out or not found." << endl;
        return false;
    }

    // List all books in the library
    void listBooks() const {
        cout << left << setw(30) << "Title"
             << setw(25) << "Author"
             << setw(15) << "ISBN"
             << "Status" << endl;
        cout << string(80, '-') << endl;

            }
            return 0;
}
