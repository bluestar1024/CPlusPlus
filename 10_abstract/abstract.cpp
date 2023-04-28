#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void run() = 0;
};

class Dog : public Animal
{
public:
    void run()
    {
        cout << "dog run!" << endl;
    }
};

class Cat : public Animal
{
public:
    void run()
    {
        cout << "cat run!" << endl;
    }
};

int main()
{
    Animal *animal;
    Dog dog;
    Cat cat;

    dog.run();
    cat.run();

    animal = &dog;
    animal->run();
    animal = &cat;
    animal->run();
    return 0;
}