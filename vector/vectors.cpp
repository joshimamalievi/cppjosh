#include <iostream>
#include <vector>


//vector is a resizable array. it works just like an array with a resizing functionality.
using namespace std;

int main() {
    vector<string> cars = {"Volvo","Ford", "Nissan"};
    for(string i : cars ) {
        cout << i << "\t";
    }

    cout<< endl << cars.front()<< endl;//outputs 1st element
    cout<< cars.back()<< endl;//outputs last element

    //adding to a vector however is really simple rather than array

    cars.push_back("Tesla");
    cars.push_back("Toyota");
    cars.push_back("Lada");
    cars.pop_back();//removes the last element
    for(string i : cars ) {
        cout << i << "\t";
    }

    cout <<endl<< cars.size() << endl;//outputs size of a vector

    cout << cars.empty();// outputs 1 if its empty else outputs 0
	return 0;
}
