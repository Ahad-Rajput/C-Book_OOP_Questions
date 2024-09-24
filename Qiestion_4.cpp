/* Write a class Result that contains roll no, name and marks of three subjects. The marks are stored in an array of integers. The class also contains the following members functions:
-> The input() function is used to input the values in data members
-> The show() function is used to displays the value of data members
-> The total() function returns the total marks of a student. 
-> The avg() fuction returns the average marks of a student.
The program should create an object of the class and call the member functions.
*/

#include <iostream>
#include <string>
using namespace std;

class Result{
private:
    int rno;
    int marks[3];
    string name;
public:
    void input() {
        cout << "Student Name : ";
        getline(cin, name);
        cout << "Student Roll no. : ";
        cin >> rno;
        cout << "\nStudent marks of 3 subjects\n";
        for (int i = 0; i < 3; i++)
        {
            cout << "Marks[" << i << "] : ";
            cin >> marks[i];
        }
        cin.ignore();
    }
    void show() const{
        cout << "Student Name : " << name << endl;
        cout << "Roll no. : " << rno << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Marks[" << i << "] : " << marks[i] << endl;
        }
    }
    int total(){
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum = sum + marks[i];
        }
        return sum;
    }
    float avg(){
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum = sum + marks[i];
        }
        return sum/3.0;
    }
};

int main()
{
    Result s1;
    cout << "\n\tEnter Student Data\n\n";
    s1.input();
    cout << "-------------------------------\n";
    s1.show();
    cout << "-------------------------------\n";
    cout << "Total Marks : " << s1.total() << endl;
    cout << "Average Marks : " << s1.avg() << endl;
    cout << "-------------------------------\n";
    return 0;
}