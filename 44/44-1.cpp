#include<iostream>
#include<string>

using namespace std;

class Parent
{
private:
    int mv;
public:
    Parent()
    {
        mv = 100;
    }
    int value()
    {
        return mv;
    }
};

class Child:public Parent
{

public:
    int addValue(int v)
    {
        mv = mv + v;
    }
};

int main()
{






    return 0;
}
