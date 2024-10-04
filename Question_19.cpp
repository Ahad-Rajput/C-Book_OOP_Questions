// Write a base class Computer that contains data members wordSize (in bits), memorySize (in megabytes), storageSize (in megabytes) and speed (in megahertz).Derive a Laptop class that is a kind of Computer but also specifies the object's length, width, height and weight. Member functions for both classes should include a default constructor, a constructor to initializes all components and a function to display data members.

#include <iostream>
using namespace std;

class Computer{
protected:
    int wordSize, memorySize, speed;
    double storageSize;
public:
    Computer(){}
    Computer(int, int, double, int);
    void show();
};

class Laptop : public Computer{
public:
    Laptop(){}
    Laptop(int, int, double, int, double, double, double, double);
    void show();
private:
    double lenght, width, height, weight;
};

Computer::Computer(int wdSiz, int memSiz, double storSiz, int spd){
    wordSize = wdSiz;
    memorySize = memSiz;
    storageSize = storSiz;
    speed = spd;
}
void Computer::show(){
    cout << "Word size : " << wordSize << endl;
    cout << "Memory size : " << memorySize << endl;
    cout << "speed : " << speed << " Mhz" << endl;
}

Laptop::Laptop(int wdSiz, int memSiz, double storSiz, int spd, double len, double wid, double ht, double wt) : Computer(wdSiz, memSiz, storSiz, spd)
{
    lenght = len;
    width = wid;
    height = ht;
    weight = wt; 
}

void Laptop::show(){
    cout << "Lenght : " << lenght << endl;
    cout << "Width : " << width << endl;
    cout << "Height : " << height << endl;
    cout << "Weight : " << weight << endl;
}

int main(){
    Computer comp(4, 512, 20, 2);
    Laptop lap(8, 1024, 50, 3, 15, 19, 14, 2);
    cout <<"\n\tComputer specification\n\n";
    comp.show();
    cout << "\n\tLaptop specification\n\n";
    lap.show();

    return 0;
}