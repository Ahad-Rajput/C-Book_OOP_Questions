//Write a class Employee that contains attributes of employee id and his scale. The class contains member functions to input and show the attributes. Write a child class Manager that inherits Employee class. The child class has attributes of manager id and his department. It also contains the member functions to input and show its attributes.

#include <iostream>
#include <string>
using namespace std;

// Parent class = Employee
class Employee {
protected:
    int empID;       
    string scale;    

public:
    void inputEmployee() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Scale: ";
        cin >> scale;
    }

    void showEmployee() const {
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Scale: " << scale << endl;
    }
};

// Child class = Manager 
class Manager : public Employee {
private:
    int managerID;       
    string department;   

public:
    void inputManager() {
        // Call base class function to input Employee details
        inputEmployee();

        cout << "Enter Manager ID: ";
        cin >> managerID;
        cout << "Enter Manager's Department: ";
        cin >> department;
    }

    
    void showManager() const {

        Employee::showEmployee();

        cout << "Manager ID: " << managerID << endl;
        cout << "Manager's Department: " << department << endl;
    }
};

int main() {
    Manager m;
    cout << "\n\tEnter Manager's details\n\n";
    m.inputManager();

    cout << "\n\tManager's Details\n\n";
    m.showManager();

    cout << "\n\n-----------------------------------\n\n";
    return 0;
}
