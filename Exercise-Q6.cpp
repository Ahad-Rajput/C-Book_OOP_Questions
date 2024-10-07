//Write a class Book that contains the attributes BookID, book name and price. It also contains member functions to input and shows its attributes. Write another class Writer that contains the attributes writer name , address and number of books written by him. It contains an array of Book objects as its member. The length of array should be 5 to store the data of five books. It also contains member functions to input and display its attributes.

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookID;
    string bookName;
    float price;

public:
    void inputBook() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cout << "Enter Book Name: ";
        cin.ignore();
        getline(cin, bookName);
        cout << "Enter Book Price: ";
        cin >> price;
    }

    void showBook() const {
        cout << "Book ID: " << bookID << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Book Price: $" << price << endl;
    }
};


class Writer {
private:
    string writerName;
    string address;
    int numOfBooksWritten;
    Book books[5];  // Array to store details of 5 books

public:
    void inputWriter() {
        cout << "Enter Writer Name: ";
        cin.ignore();
        getline(cin, writerName);
        cout << "Enter Writer Address: ";
        getline(cin, address);
        cout << "Enter Number of Books Written: ";
        cin >> numOfBooksWritten;

        if (numOfBooksWritten > 5) {
            cout << "Can only store details of 5 books. Setting number of books to 5." << endl;
            numOfBooksWritten = 5;
        }

        // Input details for each book
        for (int i = 0; i < numOfBooksWritten; ++i) {
            cout << "\nEnter details for Book " << i + 1 << ":" << endl;
            books[i].inputBook();
        }
    }

    void showWriter() const {
        cout << "\nWriter Name: " << writerName << endl;
        cout << "Writer Address: " << address << endl;
        cout << "Number of Books Written: " << numOfBooksWritten << endl;

        // Display details of each book
        for (int i = 0; i < numOfBooksWritten; ++i) {
            cout << "\nDetails of Book " << i + 1 << ":" << endl;
            books[i].showBook();
        }
    }
};

int main() {
    Writer writer;


    cout << "Enter details for the Writer and Books:\n";
    writer.inputWriter();

    cout << "\n\nWriter and Books Details:\n";
    writer.showWriter();

    return 0;
}
