#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
    string name;

    Dog(int i = 0)
    {
        total = i;
    }
    
    void addfood(int number)
    {
        total += number;
    }

    int getfood()
    {
        return total;
    }

private:
    int total;
};

int main()
{
    Dog dog;
    dog.name = "wangcai";
    dog.addfood(2);
    dog.addfood(3);
    cout << dog.name << " total get " << dog.getfood() << " food" << endl;
    //cout << dog.name << " total get " << dog.total << " food" << endl;
    return 0;
}