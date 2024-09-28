// Write a class Book that has the attributes pages, price and title. It has two functions to input the values and display the values. Create three objects of the class and input values. Creeate three objects of the class and values.

#include <iostream>
#include <string>
using namespace std;

class Book{
private:
    int pages;
    float price;
    string title;
public:
    void setData() {
        cout << "Enter title : ";
        getline(cin, title);
        cout <<"Enter pages : ";
        cin >> pages;
        cout << "Enter price : ";
        cin >> price;
        cin.ignore();
    }
    void getData() {
        cout << "Title : " << title << endl;
        cout << "Pages : " << pages << endl;
        cout << "Price : " << price << endl;
    }
};

int main()
{
    Book b1;
    cout << "\n\tEnter Data for Book\n\n";
    b1.setData();
    Book b2(b1);
    Book b3 = b1;
    cout << "\n\tDetails of b1\n\n";
    b1.getData();
    cout << "\n\tDetails of b2\n\n";
    b2.getData();
    cout << "\n\tDetails of b3\n\n";
    b3.getData();
    
    return 0;
}