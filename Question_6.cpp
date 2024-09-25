// Write a class that displays a simple message on the screen whenever an object of that glass is created.

#include <iostream>
using namespace std;

class Hello{
private:
    int a;
public:
    Hello(){
        cout << "Object created....." << endl;
    }
};

int main()
{
    Hello h1, h2, h3;
    return 0;
}
