/*  Write a class Book with three data membewrs BookID, Pages and Price. It also contains the following member function:
-> The get() function is used to input values
-> The show() function is used to display values
-> The set() function is used to set the values of data members using parameters
-> The getPrice() function is used to return the value of Price.
    The program should create two objests of the class and input values for these objects.
The programd displays the details of the most costly book.
*/

#include <iostream>

using namespace std;

class Book{
private:
    int bookID , pages;
    float price;
public:
    void get(){
        cout << "Enter Book_ID : ";
        cin >> bookID;
        cout << "Enter Pages : ";
        cin >> pages;
        cout << "Enter Price : ";
        cin >> price;
    }
    void show() const{
        cout << "Book_ID : " << bookID << endl;
        cout << "Pages : " << pages << endl;
        cout << "Price : " << price << endl;
    }
    void set(int id, int pg, float pr){
        bookID = id;
        pages = pg;
        price = pr;
    }
    float getPrice(){
        return price;
    }
};

int main()
{
    Book b1,b2;
    b1.get();
    b2.set(2,45,90.8);
    cout << "\n\tDetails of the most costly book\n\n";
    if (b1.getPrice()>b2.getPrice())
    {
        b1.show();
    }
    else
    {
        b2.show();
    }
    return 0;
}