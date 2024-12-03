#include <iostream>
#include <string>

using namespace std;

int main() {
    //this is a struct --- Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.

    //Unlike an array, a structure can contain many different data types (int, string, bool, etc.).


    //this is how you create a struct

    struct {
        int myNum;
        string  myString;
    } myStruct;
    //assigning values
    int x = myStruct.myNum = 1;
    string y = myStruct.myString = "kg Potato";

    //printing
    cout << x;
    cout << y << endl;

    // to a struct you can assign multiple identifiers

    struct {
        string name;
        int age;
    } me, brother, sister;

    me.name = "Joshgun";
    me.age = 21;

    brother.name = "Imamali";
    brother.age = 22;

    sister.name = "Angelina Jolie";
    sister.age = 75;

    cout << "My Name: " << me.name << "\nMy Age: " << me.age << endl;
    cout << "Brother\'s Name: " << brother.name << "\nBrother\'s Age: " << brother.age << endl;
    cout << "Sister's Name: " << sister.name << "\nSister's Age: " << sister.age << endl;

    //you can also name a struct where you can treat it as an obj

    struct a {
        int a;
        int b;
    };

    a givenNum;
    cout << "Give Numbers: ";
    cout << "\nA: ";
    cin >> givenNum.a;
    cout << "B: ";
    cin >> givenNum.b;

    a mathOfNums;

    mathOfNums.a = givenNum.a+givenNum.b;
    mathOfNums.b = givenNum.b*givenNum.a;

    cout << "Sum: " << mathOfNums.a << "\nMultiplied: " << mathOfNums.b;

    return 0;
}
