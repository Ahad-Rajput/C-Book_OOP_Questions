#include <iostream>
using namespace std;

class Parent{
protected:
    int n;
public:
    Parent(){
        n = 0;
    }
    Parent(int p){
        n = p;
    }
    void show(){
        cout << "n = " << n << endl;
    }
};

class Child : public Parent{
private:
    char ch;
public:
    Child() : Parent(){
        ch = 'x';
    }
    Child(char c, int m) : Parent(m){
        ch = c;
    }
    void display(){
        cout << "ch = " << ch << endl;
    }
};

int main()
{
    Child obj1, obj2('@', 1000);
    cout << "\n\tObj1 is as follow :\n\n";
    obj1.show();
    obj1.display();
    cout << "\n\tObj2 is as follow :\n\n";
    obj2.show();
    obj2.display();

    return 0;
}