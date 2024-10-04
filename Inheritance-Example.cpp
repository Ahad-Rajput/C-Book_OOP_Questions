#include <iostream>
using namespace std;

class Move{
protected:
    int pos;
public:
    Move(){
        pos = 1;
    }
    void forward(){
        pos++;
    }
    void show(){
        cout << "Position = " << pos << endl;
    }
};

class Move2 : public Move {
public: 
    void backward(){
        pos--;
    }
};

int main()
{
    Move2 m;
    m.show();
    m.forward();
    m.show();
    m.backward();
    m.show();

    return 0;
}