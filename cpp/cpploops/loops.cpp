#include <iostream>

using namespace std;

int main(){
    int i = 0;
    while(i<5){// while loop
        cout << i << endl;
        i++;
    }


    for (int i = 1; i <= 2; ++i) { //for loop
        cout << "Outer: " << i << "\n"; // Executes 2 times

        // Inner loop
        for (int j = 1; j <= 3; ++j) {
            cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
        }
    }
    int myNumbers[5] = {1, 10 , 100, 1000, 10000};


    for(int i: myNumbers) { //foreach function to print inside of  the array
        cout << i << "\n";
    }

    return 0;
}
