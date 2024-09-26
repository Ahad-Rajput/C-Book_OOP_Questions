// Write a class Over with num and ch data members. A constructor with no parameter initalizes num to 0 and ch to 'x'. A construvtor with two parameters initializes data members wiht given values and member function show() displays the values of data members.

#include <iostream>
using namespace std;

class Over {
private:
    int num ;
    char ch;
public:
    Over(){
        num = 0;
        ch = 'x';
    }
    Over(int n, char c){
        num = n;
        ch = c;
    }
    void show()
    {
        cout << "num = " << num << endl;
        cout << "ch = " << ch << endl;
    }
};

int main()
{
    Over o1, o2(10, 'a');
    cout << "\n\tValues of num & ch for o1\n\n";
    o1.show();
    cout << "\n-----------------------\n";
    cout << "\n\tValues of num & ch for o2\n\n";
    o2.show();
    cout << "\n-----------------------\n";
    return 0;
}