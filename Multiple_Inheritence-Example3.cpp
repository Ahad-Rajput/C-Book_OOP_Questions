#include <iostream>
using namespace std;

class A{
private:
    int a;
public:
    A(){
        a = 0;
    }
    A(int n){
        a = n;
    }
    void show(){
        cout << "a = " << a << endl;
    }
};
class B{
private:
    int b;
public:
    B(){
        b = 0;
    }
    B(int n){
        b = n;
    }
    void show(){
        cout << "b = " << b << endl;
    }
};
class C : public A, public B{
private:
    int c;
public:
    C(){
        c = 0;
    }
    C(int x, int y, int z) : B(x), A(y){
        c = z;
    }
    void show(){
        A::show();
        B::show();
        cout << "c = " << c << endl;
    }
};


int main()
{
    C obj, obj1(2,3,4);
    obj.show();
    obj1.show();
    
    return 0;
}