#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int value = remove("input2.txt");

    if (value == 0)
    {
        cout << "File deleted !!" << endl;
    }
    else
    {
        cout << "File not deleted !!" << endl;
    }
    
    return 0;
}