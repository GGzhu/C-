#include<iostream>
#include<string>

using namespace std;

class Demo 
{
protected:
    int mi;
    int mj;
};

class Derived : public Demo
{
    int mk;
public:
    Derived(int i, int j, int k)
    {
        mi = i;
        mj = j;
        mk = k;
    }

    void print()
    {
        cout << "mi = " << mi << endl;
        cout << "mj = " << mj << endl;
        cout << "mk = " << mk << endl;
    }
};

struct Test
{
    int mi;
    int mj;
    int mk;
};

int main()
{
    cout << "sizeof(Demo) = " << sizeof(Demo) << endl;   // 8

    cout << "sizeof(Derived) = " << sizeof(Derived) << endl;   // 12

    Derived d(1, 2, 3);
    Test* p = reinterpret_cast<Test*>(&d);

    cout << "Before changing..." << endl;

    d.print();

    p->mi = 10;
    p->mj = 20;
    p->mk = 30;

    cout << "After changing..." << endl;

    d.print();

    return 0;
}
