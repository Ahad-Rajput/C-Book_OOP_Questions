// Write a class circle with one data member radius. Write three member functions get_radius() to set radius value with parameter value, area() to display radius and circum() to calculate and display the circumference fo circle.

#include <iostream>

using namespace std;

const float PI =  3.14159 ;

class Circle {
private:
    float radius;
public:
    void get_radius(float r){
        radius = r;
    }
    void area(){
        cout << "Area of Circle : " << PI*(radius*radius) << endl;
    }
    void circum(){
        cout << "Circumference of Circle : " << 2*PI*radius << endl;
    }
};

int main()
{
    Circle c1;
    float r;
    cout << "Enter radius of Circle : ";
    cin >> r;
    c1.get_radius(r);
    c1.area();
    c1.circum();
    cout << "\n---------------- End ----------------\n\n";
    return 0;
}