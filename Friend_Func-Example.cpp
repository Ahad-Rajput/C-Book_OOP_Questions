#include <iostream>
using namespace std;

class B;
class A{
private:
    int a;
public:
    A()
    {
        a = 100;
    }
    friend void show(A, B);
};

class B{
private:
    int b;
public:
    B()
    {
        b = 10;
    }
    friend void show(A, B);
};

void show(A obj1, B obj2){
    int sum;
    sum = obj1.a + obj2.b;
    cout << "The value of class A object : " << obj1.a << endl;
    cout << "The value of class B object : " << obj2.b << endl;
    cout << "The sum of both values : " << sum << endl;
}

int main()
{
    A x; B y;
    show(x,y);
    return 0;
}