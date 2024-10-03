//Write a program that counts the number of objects created of a particular class. The program must be able to display the result even if no object is created so far.

#include <iostream>
using namespace std;

class yahoo{
private:
    static int n;
public:
    yahoo(){
        n++;
    }
    static void show(){
        cout << "You have created " << n << " objects so far." << endl;
    }
};

int yahoo::n = 0;

int main()
{
    yahoo::show();
    yahoo x , y;
    x.show();
    y.show();

    return 0;
}