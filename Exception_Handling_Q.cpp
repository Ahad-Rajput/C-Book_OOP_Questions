#include <iostream>
#include <string>

using namespace std;

float divid(float a, float b){
    if (b == 0)
    {
        throw string("Division by zero Error!");
    }
    return a/b;
}

int main()
{
    float x, y;
    cout << "Enter x : ";
    cin >> x;
    cout << "Enter y : ";
    cin >> y;

    try
    {
        cout << "Division = " << divid(x, y) << endl;
    }
    catch(string e){
        cout << "Exception caught : " << e << endl;
    }
    cout << "Everything is alright...." << endl;
    cout << "Program is continue...." << endl;

    return 0;
}