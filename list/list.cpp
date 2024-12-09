#include <iostream>
#include <list>
using namespace std;

//vectors and lists are same however there are differences
//You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.

//Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index number
int main() {
    list<string> cars = {"Mazda", "Lada", "Chevrolet", "Kia"};

    for(string i : cars) {

        cout<< i << endl;
    }

    //you can adjust the front and the back with push_back()/front() and pop_back()/front()
    cars.pop_back();
    cars.pop_front();
    cars.push_back("Vw");
    cars.push_front("Tesla");
    cout<< endl;
    for(string i : cars) {

        cout<< i << endl;
    }


	return 0;
}
