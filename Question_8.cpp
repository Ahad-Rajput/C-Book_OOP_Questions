// Write a class Student that has marks and grade as data maembers. A constructor with two parameters initializes data members with given values and member function show() displays the values fo data members. Create two objects and display the values.

#include <iostream>
using namespace std;

class Student {
private:
    int marks;
    char grade;
public:
    Student(int m , char g){
        marks = m;
        grade = g;
    }
    void show(){
        cout << "Marks = " << marks << endl;
        cout << "Grade = " << grade << endl;
    }
};

int main()
{
    Student Ahmad(80,'A'), Ali(70, 'B');
    cout << "\n\tRecord of Ahmad\n\n";
    Ahmad.show();
    cout << "\n\tRecord of Ali\n\n";
    Ali.show();
    cout << "\n--------------------------\n\n";
    
    return 0;
}