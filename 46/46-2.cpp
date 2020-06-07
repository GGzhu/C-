#include<iostream>
#include<string>

using namespace std;

class Object 
{
public:
    Object(string s)
    {
        cout << "Object(string s) : " << s << endl;
    }
};

class Parent : public Object
{
public:
    Parent() : Object("Default")
    {
        cout << "Parent()" << endl;
    }
    Parent(string s) : Object(s)
    {
        cout << "Parent(string s) : " << s << endl;
    }
};

class Child : public Parent
{
    Object m01;
    Object m02;
public:
    Child() : m01("Default 1"),m02("Default 2")
    {
        cout << "Child()" << endl;
    }
    Child(string s) : Parent(s),m01(s + "1"),m02(s + "2")
    {
        cout << "CHild(string s) :" << s << endl;
    }
};

int main()
{
    Child cc("cc");
/*
Object(string s) : cc 
Parent(string s) : cc
Object(string s) : cc1
Object(string s) : cc2
CHild(string s) : cc
*/

    return 0;
}
