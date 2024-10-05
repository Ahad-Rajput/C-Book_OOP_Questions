// Using Dereference Operator

#include <iostream>
using namespace std;

int main()
{
    int a, b, s, *p1, *p2;
    p1 = &a; p2 = &b;
    cout << "Enter a : ";
    cin >> *p1;
    cout << "Enter b : ";
    cin >> *p2;

    s = *p1 + *p2;
    cout << "Sum = " << s << endl;

    return 0;
}