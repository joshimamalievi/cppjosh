#include <iostream>

using namespace std;

//enums are written outside of the main function. An enum is a special type that represents a group of constants (unchangeable values).

enum level {
    LOW = 1,
    MEDIUM = 2,
    HIGH = 3
};
int main(){
    enum level myVar =MEDIUM;
    cout << myVar << endl;


   //in a switch

    switch (myVar) {
        case 1:
            cout << "Low Level";
            break;
        case 2:
            cout << "Medium level";
            break;
        case 3:
            cout << "High level";
            break;
    }
    return 0;
}
