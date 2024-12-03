#include <iostream>
#include <vector>//this library is helping us to use the vector functions

using namespace std;

int main() {
    //to create an array

    string cars[4/*this represent how much elements are in the array*/] = {"Volvo","BMW","Mercedes", "Fiat"};
    int num[3] = {1 , 2, 3};

    cout << "Cars Array:" << "\n\n";
    for (string i : cars) {cout << i << endl;}
    cout << "\nNumbers Array:" << "\n\n";
    for (int i : num) {cout << i << endl;}

    //a vector array can be without a size, therefore we can add as many objects in the array as much as we want

    vector<string> myCars = {"Volvo", "Fiat", "Ford"};
    cout << "\nCars Vector Array Before Adding:" << "\n\n";
    for(string i : myCars){cout << i << "\n";}

    myCars.push_back("Tesla");
    cout << "\nCars Vector Array After Adding:" << "\n\n";
    for(string i : myCars){cout << i << "\n";}

    // this is how you get the size of an array

    cout << "\n" << sizeof(cars);

    // this is how you get the array length

    int getArrayLength = sizeof(cars) / sizeof(cars[0]);

    cout << "\n" << getArrayLength << endl;

    //this is multi-dimensional array
    //2D
    cout << "\n\n 2D Array: \n";
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    for (int i = 0; i < 2; i++) {
        cout << "\n";
        for (int j = 0; j < 4; j++) {
            cout << "\t" << letters[i][j];
        }
    }
    //3D
    cout << "\n\n 3D Array: ";
    string letters2[2][2][2] = {
          {
            { "A", "B" },
            { "C", "D" }
          },
          {
            { "E", "F" },
            { "G", "H" }
          }
    };

    for (int i = 0; i < 2; i++) {
        cout << "\n";
        for (int j = 0; j < 2; j++) {
            cout << "\n";
            for (int k = 0; k < 2; k++) {
                cout << "\t" << letters2[i][j][k];
            }
        }
    }

    return 0;
}
