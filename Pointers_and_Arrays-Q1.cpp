// Display first 2 array elements using pointer:

#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {7,9,2,1,0};
    printArray(arr,5);
    int *ar;
    ar = arr;
    cout << "1st element : " << *ar << endl;
    ar++;
    cout << "2nd element : " << *ar << endl;
    return 0;
}