#include <iostream>

using namespace std;

int main() {
    int x, y, sum; // this is a variable for user input
    cout << "Type what number you want" << endl;
    cin >> x; // the function for user input "cin >>"
    cout << "Your number is: " << x << endl;
    cout << "Now type another one for summing it up " << endl;
    cin >> y;
    sum = x+y;
    cout << "The sum is: " << x << " + " << y << " = " << sum;

    return 0;
}
