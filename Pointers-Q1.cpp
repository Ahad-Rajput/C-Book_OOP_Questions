// Using static_cast<void*>(pointer)

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    char ch = '$';
    int *pt;
    char *pr;

    pt = &a;
    pr = &ch;
    cout << "The value of a : " << *pt << endl;
    cout << "Address of a : " << pt << endl;
    cout << "The value of ch : " << *pr << endl;
    cout << "Address of ch : " << static_cast<void*>(pr) << endl;

    return 0;
}