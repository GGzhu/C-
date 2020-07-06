#include<iostream>
#include<string>

using namespace std;

class Parent 
{
public:
    int mi;

    Parent()
    {
        cout << "Parent()" << "&mi" << &mi << endl;
    }
};

class Child : public Parent
{
public:
    int mi;

    Child()
    {
        cout << "Child()" << "&mi" << &mi << endl;
    }
};

int main()
{
    Child c;

    c.mi = 100;   //子类的mi

    c.Parent::mi = 100;   //父类的mi

    cout << "&c.mi = " << &c.mi << endl;
    cout << "c.mi = " << c.mi << endl;

    cout << "&c.Parent::mi = " << &c.Parent::mi << endl;
    cout << "c.Parent::mi = " << c.Parent::mi << endl;

    return 0;
}
