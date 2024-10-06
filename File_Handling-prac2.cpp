#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int a, b, c;
    string str;

    ifstream in;
    in.open("input.txt");
    in >> a >> b >> c;
    cout << a << " " << b << ' ' << c << "\n";
    while (getline(in, str))
    {
        cout << str;
    }
    in.close();

}
