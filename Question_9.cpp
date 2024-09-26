// Wirte a class TV that contains the attributes Brand Name, Model and Retail Price. Write a method to display all attributes and a method to change the attributes. Also write a constructor to initialize all the attributes.

#include <iostream>
#include <string>

using namespace std;

class TV {
public:
    TV(string bn, string m, float p);
    void change(string bn, string m, float p);
    void display();
private:
    string brand, model;
    float price;
};

TV :: TV (string bn, string m, float p){
    brand = bn;
    model = m;
    price = p;
}

void TV :: change(string bn, string m, float p){
    brand = bn;
    model = m;
    price = p;
}

void TV :: display(){
    cout << "Brnad Name : " << brand << endl;
    cout << "Model : " << model << endl;
    cout << "Price : " << price << endl;
}

int main()
{
    TV t1("SONY", "HDTV", 50000);
    cout << "\n\t--- Displaying the object ---\n\n";
    t1.display();
    cout << "\n\t--- Displaying the object after Change ---\n\n";
    t1.change("Toshiba", "STDV",40000);
    t1.display();

    return 0;
}