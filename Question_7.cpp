// Wtrite a class that contains two integer data members which are initialized to 100 when an object is created. It has a member fucntion avg that displays the average of data members.

#include <iostream>
using namespace std;

class Number{
private:
    int a, b;
public:
    Number(){
        a = b = 100;
    }
    void avg(){
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "Average of numbers : " << (a+b)/2 << endl;
    }
};

int main()
{
    Number n1;
    n1.avg();
    return 0;
}