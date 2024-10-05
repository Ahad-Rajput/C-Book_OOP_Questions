// Write a program that inputs five floating-point values in an array and displays the values in reverse order.

#include <iostream>
using namespace std;

void inputArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << "Enter array[" << i << "] : ";
        cin >> arr[i];
    }
    cout << endl;
}

int main()
{
    int array[5], *ptr;
    inputArray(array,5);
    ptr = &array[4];
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr--;
    }
    cout << endl;
    return 0;
}