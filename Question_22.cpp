//Write a class Result that has an array of three integers as attribute. It has a member function to input and a member function to display average of array elements. Create another class Student that inherits Result class. It has additional attributes of roll number,  name and an object of type Result class. It also has member functions to input and display its data members.

#include <iostream>
#include <string>
using namespace std;

class Result{
private:
    int marks[3];
public:
    void input(){
        cout << "\n\tEnter marks of 3 subjects\n\n";
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter Marks[" << i << "] : ";
            cin >> marks[i];
        }
        cin.ignore();
    }
    void display() const{
        int sum = 0;
        cout << "\n\tResult Card\n\n";
        for (int i = 0; i < 3; i++)
        {
            cout << "Marks[" << i << "] : " << marks[i] << endl;
            sum = sum + marks[i];
        }
        cout << "Total Marks : " << sum << endl;
        cout << "Average Marks : " << float(sum)/3.0 << endl;
    }
};

class Student{
private:
    int rno;
    string name;
    Result res;
public:
    void input(){
        cout << "Enter name : ";
        getline(cin, name);
        cout << "Enter roll no. : ";
        cin >> rno;
        cin.ignore();
        res.input();
    }
    void display() const{
        cout << "\n\tPersonal Information\n\n";
        cout << "Name : " << name << endl;
        cout << "Roll no. : " << rno << endl;
        res.display();
    }
};

int main()
{
    Student obj;
    obj.input();
    obj.display();

    return 0;
}