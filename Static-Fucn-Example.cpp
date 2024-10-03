#include <iostream>
using namespace std;

class Test{
private:
    static int n;
public:
    static void show(){
        cout << "n = " << n << endl; 
    }
};

int Test::n = 10;

int main()
{
    Test::show();
    return 0;
}