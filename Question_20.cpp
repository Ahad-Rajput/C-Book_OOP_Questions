// Write a program that declares two classes and defines a relationship between them using public inheritence.

#include <iostream>
using namespace std;

class Parent{
public:
    int a;
private:
    int b;
protected:
    int c;
};

class Child : public Parent{
public:
    void in(){
        cout << "Enter a : ";
        cin >> a;
        cout << "Enter c : ";
        cin >> c;
    }
    void show(){
        cout << "a = " << a << endl;
        cout << "c = " << c << endl;
    }
};

int main()
{
    Child obj;
    obj.in();
    obj.show();
    return 0;
}