#include <iostream>

using namespace std;

//In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

//derived class (child) - the class that inherits from another class
//base class (parent) - the class being inherited from


//To inherit from a class, use the : symbol.


// Base class
class Vehicle {
public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

//Another Base class
class Year {
public:
    int year = 2020;
};

class Price {//we will access a protected member by inheriting
protected:
    int price;
};

// Derived class
class Car: public Vehicle, public Year, public Price {
public:
    string model = "Mustang";
    //setter
    void setPrice(int a) {
        price = a;
    }
    //getter
    int getPrice() {
        return price;
    }
};

int main() {
    int a;
    Car myCar;
    cout << "A:What is your budget?\nYou:";
    cin >> a;
    myCar.setPrice(a);
    myCar.honk();
    cout << myCar.brand << " " << myCar.model << " " << myCar.year << endl;// printing the values
    cout << "Price: " << myCar.getPrice();
    return 0;
}

//Inhearitance is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.
