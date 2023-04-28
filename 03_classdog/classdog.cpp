#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
    string name;
    int age;
    void func()
    {
        cout << "dog name is " << name << ", dog age is " << age << endl;
    }
};

int main()
{
    Dog dog1;
    dog1.name = "wangcai";
    dog1.age = 2;
    dog1.func();

    Dog *dog2 = new Dog();

    if(NULL == dog2)
        return -1;
    
    dog2->name = "fugui";
    dog2->age = 1;
    dog2->func();

    delete dog2;
    dog2 = NULL;
    return 0;
}