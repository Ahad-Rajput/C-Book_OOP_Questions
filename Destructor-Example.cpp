#include <iostream>
using namespace std;

class Test{
private:
    int n;
public:
    Test(){
        cout << "Object Created .......\n";
    }
    ~Test(){
        cout << "Object Destroyed .......\n";
    }
};

int main()
{
    Test t1, t2, t3;
    return 0;
}