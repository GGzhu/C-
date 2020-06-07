#include <iostream>
#include <string>

using namespace std;

class Parent
{
};

class Child_A : public Parent
{
};

class Child_b : protected Parent
{
};

class Child_c : private Parent
{
};

int main()
{   
    return 0;
}

