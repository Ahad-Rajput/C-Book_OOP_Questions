// Write a class Travel that has the attributes of kilometers and hours. A consturctor with no parameter initializes both data members to 0. A member function get() inputs the values and function show() displays the values. It has a member function add() that takes an object of type Travel to add the kilometes and hours of calling object and the parameter.

#include <iostream>
using namespace std;

class Travel{
private:
    float km, hr;
public:
    Travel(){
        km = 0;
        hr = 0;
    }
    void get(){
        cout << "Enter distance (km) : ";
        cin >> km;
        cout << "Enter time (hours) : ";
        cin >> hr;
    }
    void show() const{
        cout << "You travelled " << km << " km in " << hr << " hours.";
    }
    void add(Travel p){
        Travel t;
        t.km = km + p.km;
        t.hr = hr + p.hr;
        cout << "Total distance travelled " << t.km << " km in " << t.hr << " hours." << endl;
    }
};

int main()
{
    Travel t1, t2;
    cout << "\n\tEnter data of Travelling (t1)\n\n";
    t1.get();
    cout << "\n\tGet data for Travelling (t2)\n\n";
    t1.show();
    cout << "\n------------------------------------\n";
    cout << "\n\tEnter data of Travelling (t2)\n\n";
    t2.get();
    cout << "\n\tGet data for Travelling (t2)\n\n";
    t1.show();
    cout << "\n------------------------------------\n\n";
    t1.add(t2);
    cout << "\n------------------------------------\n";
    
    return 0;
}