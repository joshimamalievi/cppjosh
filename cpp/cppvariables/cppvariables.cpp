#include <iostream>

using namespace std;

int main() {
    int myNum = 15;// integer variable
    cout << myNum << endl ;// printing variable

    int num;
    num = 35; // assigning value
    cout << num << endl;

    //overriding

    num = 25;
    cout << num << endl;

    //other types

    double myDoubleNum = 5.99;
    char myLetter = 'D';
    string myText = "My String says WHAAAT???";
    bool myBoolean = true;

    //printing string with integer
    cout << "I have " << num << " Potatoes" << endl;

    //mathematic operations

    int sum = num + myNum;

    cout << "Sum of the number of Potatoes is " << sum << endl;

    // multiple variables

    int x, y, z;
    x = y = z = 50;
    cout << x + y + z << endl;

    // setting const values

    const float PI = 3.14;// you must declare a constant variable else it will give error

    return 0;
}
