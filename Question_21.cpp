// Write a class Person that has attibutes of id, name and address. It has a constructor to initialize, a member function to input and a member function to display data members. Create 2nd class Student that inherits Person class. It has additional attributes of roll number and marks. It also has member function to input and display the data members. Create 3rd class Scholarship that inherits Student class. It has additional attributes of scholarship name and amount. It also has member functions to input and display its data members.


#include <iostream>
#include <string>
using namespace std;

class Person{
protected:
    int id;
    string name, address;
public:
    Person(){
        id = 0;
        name = "\0";
        address = "\0";
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
        cout << "\n\tPersonal Information :\n\n";
        cout << "Name : " << name << endl;
        cout << "ID no. : " << id << endl;
        cout << "Address : " << address << endl;
    }
};

class Student : public Person{
protected:
    int rno;
    float marks;
public:
    Student() : Person(){
        rno = 0 ; marks = 0;
    }
    void setData(){
        Person::setData();
        cout << "Enter roll no. : ";
        cin >> rno;
        
        cout << "Enter marks : ";
        cin >> marks;
        cin.ignore();
    }

    void getData() const{
        Person::getData();
        cout << "\n\tEducational Information :\n\n";
        cout << "Roll no. : " << rno << endl;
        cout << "Marks : " << marks << endl;
    }
};

class Scholarship : public Student{
private:
    string sname;
    int amount;
public:
    Scholarship() : Student(){
        sname = "\0";
        amount = 0;
    }
    void setData(){
        Student::setData();
        cout << "Enter scholarship name : ";
        getline(cin, sname);
        cout << "Enter scholarship amount : ";
        cin >> amount;
        cin.ignore();
    }

    void getData() const{
        Student::getData();
        cout << "\n\tScholarship Information :\n\n";
        cout << "Scholarship Name : " << sname << endl;
        cout << "Scholarship Amount : " << amount << endl;
    }
}; 

int main()
{
    cout << "\n-------------------------------\n\n";
    Scholarship obj;
    obj.setData();
    cout << "\n-------------------------------\n\n";
    obj.getData();
    cout << "\n-------------------------------\n\n";

    return 0;
}