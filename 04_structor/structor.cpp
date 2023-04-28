#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
    Dog();
    ~Dog();
};

int main()
{
    Dog dog;
    cout << "构造与析构中" << endl;
    return 0;
}

Dog::Dog()
{
    cout << "构造中" << endl;
}

Dog::~Dog()
{
    cout << "析构中" << endl;
}