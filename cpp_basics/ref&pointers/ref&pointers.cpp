#include <iostream>

using namespace std;

int main() {

    // lets star with references and memory access
    string myname = "Joshgun";
    string &name = myname;// this is a reference which will output the same

    cout << name << endl;

    //and this is memory accessing

    cout << &myname<< endl;

    //References and Pointers are important in C++,
    //because they give you the ability to manipulate the data in the computer's memory - which can reduce the code and improve the performance.


    // and this is a pointer which will store the memory address of the value

    string* ptr = &myname;
    cout << ptr << endl; // outputs the same as &myname
    cout << *ptr << endl; // this deferences and outputs the value


    //Note that the * sign can be confusing here, as it does two different things in our code:

    //When used in declaration (string* ptr), it creates a pointer variable.
    //When not used in declaration, it act as a dereference operator.


    //this is how you edit the values of a pointer

    *ptr = "Joshgun Imamalievi";

    //which will also change the valu of the variable that is pointed

    cout << ptr << endl; // will still output the same address

    cout << *ptr << endl; // different value

    cout << myname << endl; // different value for the variable value also


    return 0;
}
