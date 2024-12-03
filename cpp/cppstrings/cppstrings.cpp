#include <iostream>
#include <string>// adding string function to have more available functions

using namespace std;

int main() {
    string txt = "JOSHGUNIMAMALIEVI";
    cout << "The length of the text is: " << txt.length() << endl; // to get the length of the string
    string x = "Baambili";
    cout << "The length of the another given text is: " << x.size() << endl; // it is the same function it has no difference

    // Accessing to the strings

    cout << x[0] << endl;// outputs B since its the 1st letter. c++ starts the count at 0
    cout << x[x.length() - 1] << endl; // outputs the last char

    x[1] = 'B'; //replacing the letter

    cout << x << endl;

    // at() function

    cout << x.at(2) << endl; //this does the same thing

    //User input

    string firstName;
    cout << "A: What is your name?" << endl << "You: ";
    cin >> firstName;
    cout << "A: Oh, Hi " << firstName;

    string greeting1 = "Hello";  // Regular String
    char greeting2[] = "Hello";  // C-Style String (an array of characters)

    return 0;
}
