// Write a class Travel that has the attributes kilometers and hours. A constructor with no parameter initializes boht data members to 0. A memeber function get() inputs the values and function show() displays the values. It has a member function add() that takes an object and the parameter and returns an object with added values.

#include <iostream>
using namespace std;

class Travel {
private:
    float km, hr;
public:
    Travel(){
        km = 0; hr = 0;
    }
    void get(){
        cout << "Enter distance (km) : ";
        cin >> km;
        cout << "Enter time (hours) : ";
        cin >> hr;
    }
    void show() const{
        cout << "You travelled " << km << " km in " << hr << " hours." << endl;
    }
    Travel add(Travel p){
        Travel t;
        t.km = km + p.km;
        t.hr = hr + p.hr;
        return t;
    }
};

int main()
{
    Travel t1, t2, r;
    cout << "\n\tEnter data of Travelling (t1)\n\n";
    t1.get();
    cout << "\n\tEnter data of Travelling (t2)\n\n";
    t2.get();
    cout << "\n----------------------------------------\n";
    cout << "\n\tGet data of Travelling (t1)\n\n";
    t1.show();
    cout << "\n\tGet data of Travelling (t2)\n\n";
    t2.show();
    cout << "\n----------------------------------------\n";
    r = t1.add(t2);
    cout << "\n\tTotal Travelling is as follow\n\n";
    r.show();
    cout << "\n----------------------------------------\n\n";
    
    return 0;
}