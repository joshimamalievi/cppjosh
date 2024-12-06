#include <iostream>


//Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.
using namespace std;
//base class
class Animal {
public:
    void animalSound() {
        cout << "Animals make these sounds: \n";
    }

};
//derived
class Pig: public Animal {
public:
    void animalSound(){
        cout << "Pig: OINK OINK OINK \n";
    }
};
//derived
class Dog: public Animal {
public:
    void animalSound(){
        cout << "Dog: Hello, My Name is Brian Griffin \n";
    }
};

int main() {
    Animal obj;
    Pig oink;
    Dog haw;

    obj.animalSound();
    oink.animalSound();
    haw.animalSound();


    return 0;
}
