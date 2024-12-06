#include <iostream>

using namespace std;

class MyClass {// if you dont have a specifier in a class it will be private by deafult
public:
    int x = 0;
private:
    int y = 0;
};

//Lets make an example of accessing the private members of a class outside

class Employees {
private:
    int salary;

public:// after making some public methods in the same class of private member we can access the private information and modify.
    void setSalary(int a) {//setter function
        salary = a;
    }
    int getSalary() {//getter function
        return salary;
    }
};

//there is also one more specifier that I will show in the inheritance class file

int main() {
    MyClass obj;
    Employees Joshgun;
    Employees Imamali;

    Joshgun.setSalary(1000);
    Imamali.setSalary(5);
    int wage = Joshgun.getSalary();
    int beggerwage = Imamali.getSalary();

    cout << wage << endl;
    cout << beggerwage << endl;

    cout<< obj.x<< endl;



    //cout<< obj.y;//will not print because its private and give an error
    return 0;
}

// this is called encapsulation and it is good for better code control and more private data.
