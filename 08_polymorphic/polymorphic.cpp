#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    virtual void run()
    {
        cout << "Animal run!" << endl;
    }
};

class Dog : public Animal
{
public:
    void run()
    {
        cout << "Dog run!" << endl;
    }
};

class Cat : public Animal
{
public:
    void run()
    {
        cout << "Cat run!" << endl;
    }
};

int main()
{
    Animal *animal;
    Dog dog;
    Cat cat;

    animal = &dog;
    animal->run();

    animal = &cat;
    animal->run();
    return 0;
}