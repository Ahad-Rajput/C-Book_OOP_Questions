//Write a program that counts the number of objects created of a particular class.

#include <iostream>
using namespace std;

class yahoo{
private:
    static int n;
public:
    yahoo()
    {
        n++;
    }
    void show(){
        cout << "You have created " << n << " objects so far." << endl;
    }
};
int yahoo::n = 0;
int main()
{
    yahoo x, j, k, y;
    x.show();
    yahoo z, i, l;
    x.show();

    return 0;
}