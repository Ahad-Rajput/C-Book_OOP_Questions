//Create two classes DM and DB to store the value of distances. DM stores distances in meters and cetimeters and DB in feet and inches. Write a program that can read values for the class objects and add one object of DM wiht another object of DB.   (Hint: Use friend function)

#include <iostream>

using namespace std;

class DB;
class DM{
private:
    int meters, centimeters;
public:
    DM(int m=0, int cm=0) : meters(m), centimeters(cm) {}

    void display() const{
        cout << "Distance (meters) : " << meters << endl;
        cout << "Distance (centimeters) : " << centimeters << endl;
    }
    friend DM total(DM, DB);
};

class DB{
private:
    int inches, feet;
public:
    DB(int f=0, int in=0) : feet(f), inches(in) {}

    void display(){
        cout << "Distance (feet) : " << feet << endl;
        cout << "Distance (inches) : " << inches << endl;
    }
    friend DM total(DM, DB);
};

DM total(DM dmObj, DB dbObj){
    // Convert DB (feet, inches) to DM (meters, centimeters)
    int totalInches = dbObj.feet * 12 + dbObj.inches;
    int totalCentimeters = totalInches * 2.54; // 1 inch = 2.54 cm

    int totalMetersFromDB = totalCentimeters / 100;  // Extracting meters from total cm
    int remainingCentimetersFromDB = totalCentimeters % 100;  // Remaining centimeters

    // Add the distances
    int finalMeters = dmObj.meters + totalMetersFromDB;
    int finalCentimeters = dmObj.centimeters + remainingCentimetersFromDB;

    // Handle overflow of centimeters (100 cm = 1 meter)
    if (finalCentimeters >= 100) {
        finalMeters += finalCentimeters / 100;
        finalCentimeters %= 100;
    }

    // Return a new DM object with the result
    return DM(finalMeters, finalCentimeters);
}

int main() {
    // Creating DM object (meters, centimeters)
    DM dmObj(5, 75);

    // Creating DB object (feet, inches)
    DB dbObj(6, 2);

    cout << "Initial distances:" << endl;
    dmObj.display();
    dbObj.display();

    // Adding the two distances using the friend function
    DM result = total(dmObj, dbObj);

    cout << "\nAfter adding the distances:" << endl;
    result.display();

    return 0;
}