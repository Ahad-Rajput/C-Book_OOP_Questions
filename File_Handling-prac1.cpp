#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, b, c;
    ofstream out;
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;
    cout << "Enter value of c : ";
    cin >> c;
    out.open("input.txt");
    out << a << ' ' << b << ' ' << c << '\n';
    out << "Han G! Tu kia haal hn sab k\n";
    cout << "\nData transfer is completed...\n";
    out.close();

}