#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    string color;
    int weight;
};

class Dog : public Animal
{
public:
    string name;
    int age;
    void func();
};

int main()
{
    Dog dog;
    dog.color = "black";
    dog.weight = 120;
    dog.name = "hashiqi";
    dog.age = 2;
    cout << "dog color is " << dog.color << endl;
    cout << "dog weight is " << dog.weight << endl;
    cout << "dog name is " << dog.name << endl;
    cout << "dog age is " << dog.age << endl;
}