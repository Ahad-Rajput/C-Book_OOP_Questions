#include <iostream>
#include <string>

using namespace std;

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mult(int a, int b){
    return a*b;
}
int divide(int a, int b){
    if (b == 0)
    {
        throw string("Division by zero Error !");
    }
    return a/b;
}

int main()
{
    int choice;
    cout << "1- Calculation" << endl;
    cout << "2- Quit" << endl;
    cout << "Enter your choice(1 or 2) : ";
    cin >> choice;
    cin.ignore();
    
    switch (choice)
    {
    case 1:
        while (true)
        {
        try{
            string input;
            cout << "\n--------------------------------------------\n\n";
            int a,b;
            cout << "Enter a : ";
            cin >> a;
            cout << "Enter b : ";
            cin >> b;
            cin.ignore();
            cout << "\n--------------------------------------------\n\n";
            cout << "Enter 'add' for Addition" << endl;
            cout << "Enter 'subtract' for Subtraction" << endl;
            cout << "Enter 'multiply' for Multiplication" << endl;
            cout << "Enter 'divide' for Division" << endl;
            cout << "Enter 'quit' for Exit" << endl;
            cout << "\n--------------------------------------------\n\n";
            cout << "Enter your choice : ";
            getline(cin, input);
            cout << "\n--------------------------------------------\n\n";
            if (input == "add")
            {
                cout << "\tAddition of " << a << " and " << b << " = " << add(a,b) << endl;
            }
            else if (input == "subtract")
            {
                cout << "\tSubtraction of " << a << " and " << b << " = " << sub(a,b) << endl;
            }
            else if (input == "multiply")
            {
                cout << "\tMultiplication of " << a << " and " << b << " = " << mult(a,b) << endl;
            }
            else if (input == "divide")
            {
                cout << "\tDivision of " << a << " and " << b << " = " << divide(a,b) << endl;
            }
            else if (input == "quit")
            {
                exit(0);
                break;
            }
            else
            {
                cout << "Invalid choice!" << endl;
            }
        }
        catch(string e){
            cout << "Exception caught : " << e << endl;
        }
        }

        break;
    case 2:
        exit (0);
        break;
    default:
        cout << "Invalid choice !" << endl;
        break;
    }
    return 0;
}