#include<iostream>
#include<string>

using namespace std;

class Parent 
{
public:
    int mi;

    int add(int i)
    {
        mi += i;
    }

    int add(int a, int b)
    {
        mi += (a+b);
    }

    void print()
    {
        cout << "I am Parent." << endl;
    }
};

class Child : public Parent
{
public:
    int mv;

    int add(int x, int y, int z)
    {
        mv += (x+y+z);
    }

    void print()
    {
        cout << "I am Child." << endl;
    }
};

void how_to_print(Parent* p)
{
    cout << "&p : " << p <<endl;
    p->print();
}

int main()
{
    Child c;
    Parent p;

    how_to_print(&p);  //expected to print: I am Parent.
    how_to_print(&c);  //expected to print: I am Child.

    return 0;
}
