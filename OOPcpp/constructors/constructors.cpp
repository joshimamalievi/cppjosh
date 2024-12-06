#include <iostream>

using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "This constructor is called" << endl;
    }
};
//Lets make one with parameters

class Car {
public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z); /*{//constructor with parameters
        brand = x;
        model = y;
        year = z;
    }//just like functions you can also define them outside of the class;*/
};

Car:: Car(string x, string y, int z) {// this will work the same
    brand = x;
    model = y;
    year = z;
}

int main() {
    MyClass obj; //creating an object for this class is going to call the function and run it

    //now creating objects for this constructor class

    Car car("Ford", "Mustang", 2020);

    cout << car.brand << " " << car.model << " " << car.year << endl;
    return 0;
}
