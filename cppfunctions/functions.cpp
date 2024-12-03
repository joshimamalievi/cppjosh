#include <iostream>

using namespace std;

//function is outside of main() block and it is only executed when its called

void helloJosh() {
    cout << "Hello Josh" << endl;
}
// function with parameters
void family(string name, int age) {
    cout << name << " Imamalievi, " << age << " years old" << endl;
}

//with return values

float avgage (float a, float b) {
    float avg = (a+b)/2;
    return avg;
}

//a swap number function with references

void swapNums(int &x, int &y) {// the reason we use references of their memory address is to switch their value without creating a new value in the memory
      int z = x;
      x = y;
      y = z;
}

//printing array function

void printArry(int a[5]) {
    for(int i=0; i<5; i++) {
        cout << a[i] << " ";
    }
}

//we can create outside of main an global scope variable which can be used any place in the code after its created

int a = 5;// naming of these variable doesnt affect the names of local variables as they treated as another variable

int b = 9;

//lets make a recursion function which sums up the value to the n number

int sum(int n) {
    if(n>0) {
        return n + sum(n-1); //this will go on until the number is 0
    } else {return 0;}// this will stop after hitting 0
}


int main(){
    helloJosh();
    family("Joshgun", 21);
    family("Imamali", 22);
    cout << avgage(21, 22);

    int num1 = 1;
    int num2 = 0;

    cout << "\nBefore switch: \nA:" << num1 << "\nB:" << num2 << endl;
    swapNums(num1,num2);
    cout << "After switch: \nA:" << num1 << "\nB:" << num2 << endl;


    int myArray[5] = {1, 2, 3, 4, 5};
    cout << "Printing Array\n";
    printArry(myArray);
    cout << "\n";
    int n;

    cout << "Please enter your number for recursion sum:";

    cin >> n;

    int rsum = sum(n);
    cout << "Sum:";
    cout << rsum;

    return 0;
}
