#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
    int weight;
    Dog operator+(const Dog &A)
    {
        Dog dog;
        dog.weight = this->weight + A.weight;
        return dog;
    }
};

int main()
{
    Dog dog1;
    Dog dog2;
    Dog dog3;
    dog1.weight = 10;
    dog2.weight = 20;
    dog3 = dog1 + dog2;
    cout << "dog3 weight is " << dog3.weight << endl;
}