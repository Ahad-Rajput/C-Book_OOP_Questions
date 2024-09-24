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
};