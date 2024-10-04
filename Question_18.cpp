/*Write a program that declares two classes. The parent class is called Simple that has two data members a and b to store two numbes. It also has four member functiosn:
->The add() function adds to numbers and displays the result.
->The sub() function subtracts two numbers and displays the result.
->The mult() function multiplies two numbers and displays the result.
->The div() function divides two numbers and displays the result.
   The child class is called Complex that ovrrides all four functions. Each function in the child class checks the values of data members. It calls the corresponding member function in the parent class if the values are greater than 0. Otherwise it displayes error message.
*/

#include <iostream>
using namespace std;

class Simple{
protected:
    int a, b;
public:
    void in(){
        cout << "Enter a : ";
        cin >> a;
        cout << "Enter b : ";
        cin >> b;
    }
    void add(){
        cout << "a + b = " << a+b << endl;
    }
    void sub(){
        cout << "a - b = " << a-b << endl;
    }
    void mult(){
        cout << "a * b = " << a*b << endl;
    }
    void div(){
        cout << "a / b = " << a/b << endl;
    }
};

class Complex : public Simple{
public:
    void add(){
        if ((a <= 0) || (b <= 0))
        {
            cout <<"Invalid values!" << endl;
        }
        else
        {
            Simple::add();
        }
    }
    void sub(){
        if ((a <= 0) || (b <= 0))
        {
            cout <<"Invalid values!" << endl;
        }
        else
        {
            Simple::sub();
        }
    }
    void mult(){
        if ((a <= 0) || (b <= 0))
        {
            cout <<"Invalid values!" << endl;
        }
        else
        {
            Simple::mult();
        }
    }
    void div(){
        if ((a <= 0) || (b <= 0))
        {
            cout <<"Invalid values!" << endl;
        }
        else
        {
            Simple::div();
        }
    }
};

int main()
{
    Complex c1;
    cout << "\n\tEnter Numbers for Arithmatic Operations\n\n";
    c1.in();
    c1.add();
    c1.sub();
    c1.mult();
    c1.div();
    
    return 0;
}