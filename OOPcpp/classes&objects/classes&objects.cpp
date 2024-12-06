#include <iostream>

using namespace std;

class MyClass {// creating a class that will help us tidy the code and use the variables in main()
public: //this is an access specifier
    int myNum;
    string myString;

};

//we can also make methods in classes

class MyMethod {
public:
    int sum(int a, int b) {
       return a+b;
    }
    void hello(); // you can define this function outside of the class too
};

void MyMethod::hello() {
    cout << "Hello World" << endl;
}

int main() {
    MyClass obj;//defining an object for the class

    obj.myNum = 21;//setting values
    obj.myString = "Joshgun";

    cout << obj.myNum << " " << obj.myString << endl;// printing the values that we assigned

    //you can create multiple object for the same class

    MyClass obj2;

    obj2.myNum = 9;
    obj2.myString = "Imamalievi";

    cout << obj2.myNum << " " << obj2.myString << endl;

    //calling for method class

    MyMethod fnc;//assigning function object "fnc"

    cout << fnc.sum(5,6) << endl;
    fnc.hello();// calling the function

    return 0;
}
