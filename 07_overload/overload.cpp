#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
    string name;
    void getweight(int weight)
    {
        cout << name << " weight is " << weight << "kg" << endl;
    }
    void getweight(double weight)
    {
        cout << name << " weight is " << weight << "kg" << endl;
    }
};

int main()
{
    Dog dog;
    dog.name = "wangcai";
    dog.getweight(10);
    dog.getweight(10.5);
    return 0;
}