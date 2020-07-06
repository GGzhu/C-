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

    void add(int v)
    {
        mi += v;
    }

    void add(int a, int b)
    {
        mi += (a+b);
    }
};

class Child : public Parent
{
public:
    int mi;

    void add(int x, int y, int z)
    {
        mi += (x+y+z);
    }
};

int main()
{
    Child c;

    c.mi = 100;   //子类的mi

    c.Parent::mi = 1000;   //父类的mi

    cout << "c.mi = " << c.mi << endl;
    cout << "c.Parent::mi = " << c.Parent::mi << endl;

    c.Parent::add(1);
    c.Parent::add(2,3);
    c.add(4,5,6);

    cout << "c.mi = " << c.mi << endl;
    cout << "c.Parent::mi = " << c.Parent::mi << endl;

    return 0;
}
