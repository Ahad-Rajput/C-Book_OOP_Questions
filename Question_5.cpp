/* Write a class Array that contains an array of integers to store five values. It also contains the following member functions defined outside the class:
-> The fill() function is used to fill the array with values from the user.
-> The display() function is used to display the values of array.
-> The max() function shows the maximum value in the array.
-> The min() function shows the minimum vlue in the array.
*/

#include <iostream>
using namespace std;

class Array{
private:
    int array[5];
public:
    void fill(){
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter number at Array[" << i << "] : ";
            cin >> array[i];
        }
    }
    void display(){
        for (int i = 0; i < 5; i++)
        {
            cout << "Array[" << i << "] : " << array[i] << endl;
        }
    }
    int max(){
        int max;
        max = array[0];
        for (int i = 0; i < 5; i++)
        {
            if (array[i] > max)
            {
                max = i;
            }
        }
        return array[max];
    }
    int min(){
        int min;
        min = array[0];
        for (int i = 0; i < 5; i++)
        {
            if (array[i] < min)
            {
                min = i;
            }
        }
        return array[min];
    }
};

int main()
{
    Array arr;
    cout << "\n\tEnter numbers in Array\n\n";
    arr.fill();
    cout << "\n--------------------------\n";
    arr.display();
    cout << "\n--------------------------\n";
    cout << "Maximum number in Array : " << arr.max() << endl;
    cout << "Minimum number in Array : " << arr.min() << endl;
    cout << "\n--------------------------\n";
    return 0;
}