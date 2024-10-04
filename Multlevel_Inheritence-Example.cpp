#include <iostream>
using namespace std;

class A{
private:
    int a;
public:
    void in(){
        cout << "Enter a : ";
        cin >> a;
    }
    void out() const{
        cout << "a = " << a << endl;
    }
};

class B : public A{
private:
    int b;
public:
    void in(){
        A::in();
        cout << "Enter b : ";
        cin >> b;
    }
    void out() const{
        A::out();
        cout << "b = " << b << endl;
    }
};

class C : public B{
private:
    int c;
public:
    void in(){
        B::in();
        cout << "Enter c : ";
        cin >> c;
    }
    void out() const{
        B::out();
        cout << "c = " << c << endl;
    }
};

int main()
{
    C obj;
    obj.in();
    obj.out();

    return 0;
}