//Write a class Marks with three data members to store three marks. Write three member fucntions int() to input marks, sum() to calculate and return the sum, avg() to calculate and return the average marks.

#include <iostream>

using namespace std;

class Marks{
private:
    int a, b, c;
public:
    void setData(){
        cout << "Enter three marks : ";
        cin >> a >> b >> c;
    }
    int sum(){
        return a + b + c;
    }
    float avg(){
        return (a+b+c)/3.0;
    }
};
int main()
{
    Marks m1;
    m1.setData();
    cout << "Sum = " << m1.sum() << endl;
    cout << "Average = " << m1.avg() << endl;
    return 0;
}