// Write a program that creates three objects of class Student. Each object of class must be assigned a unique roll number. (Hint: Use static data member for unique roll number.)

#include <iostream>
#include <string>
using namespace std;

class Student{
private:
    static int r;
    int marks, rno;
    string name;
public: 
    Student(){
        r++;
        rno = r;
    }
    void setData(){
        cout << "Enter name : ";
        getline(cin, name);
        cout << "Enter marks : ";
        cin >> marks;
        cin.ignore();
    }
    void getData() const{
        cout << "Roll no. : " << rno << endl;
        cout << "Name : " << name << endl;
        cout << "Marks : " << marks << endl;
    }
};

int Student::r = 0;

int main()
{
    Student std1, std2, std3;
    cout << "\n\tEnter data for 1st Student\n\n";
    std1.setData();
    cout << "\n\tEnter data for 2nd Student\n\n";
    std2.setData();
    cout << "\n\tEnter data for 3rd Student\n\n";
    std3.setData();
    cout << "\n------------------------------------\n";
    cout << "\n\tData of 1st Student\n\n";
    std1.getData();
    cout << "\n\tData of 2nd Student\n\n";
    std2.getData();
    cout << "\n\tData of 3rd Student\n\n";
    std3.getData();
    cout << "\n------------------------------------\n";
    
    return 0;
}