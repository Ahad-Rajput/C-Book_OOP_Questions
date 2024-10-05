//Write a program to input five integers in an array and display them using a pointer.

#include <iostream>
using namespace std;

void inputArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element in array[" << i << "] : ";
        cin >> arr[i];
    }
}

int main()
{
    int array[5];
    inputArray(array, 5);
    int *ptr = array;
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
    return 0;
}