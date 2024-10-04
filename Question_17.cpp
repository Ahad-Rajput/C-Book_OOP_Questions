// Write a class Person that has the attributes of id, name and address. It has a constructor to initialize, a member fucntion to input and a member function to display data members. Create another class Student that inherits Person class. It has additional attributes of roll number and marks. It also has member function to input and display its data members.

#include <iostream>
using namespace std;

class Person{
protected:
    int id;
    string name , address;
public:
    Person(){
        id = 0 ; name = "\0" ; address = "\0";
    }
    void setData(){
        cout << "Enter name : ";
        getline(cin, name);
        
        cout << "Enter id : ";
        cin >> id;
        cin.ignore();

        cout << "Enter address : ";
        getline(cin, address);
    }
    void getData() const{
        cout << "Name : " << name << endl;
        cout << "ID no. : " << id << endl;
        cout << "Address : " << address << endl;
    }
};

class Student : public Person{
private:
    int rno;
    float marks;
public:
    Student() : Person(){
        rno = marks = 0;
    }
    void setData(){

        Person::setData();

        cout << "Enter roll no. : ";
        cin >> rno;
        cout << "Enter marks : ";
        cin >> marks;
        cin.ignore();
    }
    void getData(){
        
        Person::getData();

        cout << "Roll no. : " << rno << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Student s;
    cout << "\n\tEnter Data for Student\n\n";
    s.setData();
    cout << "\n-----------------------\n\n";
    cout << "\n\tData of Student\n\n";
    s.getData();
    cout << "\n-----------------------\n\n";
    
    return 0;
}