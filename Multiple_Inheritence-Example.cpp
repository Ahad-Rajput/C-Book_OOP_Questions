#include <iostream>

using namespace std;

class A{
private:
    int a;
public:
    void set(){
        cout << "Enter a : ";
        cin >> a;
    }
    void get() const{
        cout << "a = " << a << endl;
    }
};

class B{
private:
    int b;
public:
    void set(){
        cout << "Enter b : ";
        cin >> b;
    }
    void get() const{
        cout << "b = " << b << endl;
    }
};

class C : public A , public B{
private:
    int c;
public:
    void set(){
        A::set();
        B::set();
        cout << "Enter c : ";
        cin >> c;
    }
    void get() const{
        A::get();
        B::get();
        cout << "c = " << c << endl;
    }
};

int main()
{
    C obj;
    obj.set();
    obj.get();

    return 0;
}