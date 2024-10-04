#include <iostream>
using namespace std;

class A{
private:
    int a;
public:
    void set(int x){
        a = x;
    }
    void get() const{
        cout << "a = " << a << endl;
    }
};
class B : public A {
private:
    int b;
public:
    void set(int y, int m){
        A::set(m);
        b = y;
    }
    void get() const{
        A::get();
        cout << "b = " << b << endl;
    }
};
class C : public B{
private:
    int c;
public:
    void set(int w, int e, int r){
        B::set(w,e);
        c = r;
    }
    void get() const{
        B::get();
        cout << "c = " << c << endl;
    }
};

int main()
{
    C obj;
    obj.set(4,9,6);
    obj.get();

    return 0;
}