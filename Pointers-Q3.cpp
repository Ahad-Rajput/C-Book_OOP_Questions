// Pointer Initialinztion

#include <iostream>

using namespace std;

int main()
{

    int a;
    int *ptr = &a;
    cout << "Enter an integer : ";
    cin >> *ptr;
    
    cout << "You entered " << *ptr << endl;
    return 0;

}