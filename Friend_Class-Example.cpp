#include <iostream>
using namespace std;

class A{
private:
    int a, b, c;
public:
    A(){
        a = 1; b = 2; c = 3;
    }
    friend class B;
};

class B{
public:
    int sum = 0;
    void showA(A obj){
        cout << "The value of a in class A : " << obj.a << endl;
        sum = sum + obj.a;
    }
    void showB(A obj){
        cout << "The value of b in class A : " << obj.b << endl;
        sum = sum + obj.b;
    }
    void showC(A obj){
        cout << "The value of c in class A : " << obj.c << endl;
        sum = sum + obj.c;
    }
    void total(){
        cout << "Sum of all values : " << sum << endl;
    }

};

int main()
{
    A x ; B y;
    y.showA(x);
    y.showB(x);
    y.showC(x);
    y.total();
    return 0;
}

