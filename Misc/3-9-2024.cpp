// Cat inheriting from animal class

#include <iostream>
using namespace std;

class Animal
{
    protected:
        // Init number of legs
        Animal (int l) : legs(l) {}

        int legs;

        // Method meant to be overridden 
        void makeSound()
        {
            cout << "Sound" << endl;
        }
};

class Cat : private Animal
{
    public:
        // Call protected method of base class
        void makeSound()
        {
            Animal::makeSound();
        }

        // Set Legs
        Cat() : Animal(4) {}

        int getLegs() {return Animal::legs;}
};

int main()
{
    Cat tom;

    cout << "Tom has: " << tom.getLegs() << " legs" << endl;
    cout << "Tom Sound: ";
    tom.makeSound();

    return 0;
}