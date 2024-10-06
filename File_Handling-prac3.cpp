#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    int a, b, c;
    char str;

    ifstream in;
    ofstream out;
    in.open("input.txt");
    out.open("input2.txt");
    while (in.get(str))
    {
        out.put(str);    
    }
    cout << "Data is copied !"<< endl;
    in.close();
    out.close();

}