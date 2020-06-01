#include<iostream>
using namespace std;

class Value
{
private:
    int mi = 0;
public:
    Value(int i)
    {
        mi = i;
    }
    int getI()
    {
        return mi;
    }
}

class Test
{
private:
    Value m2;
    Value m3;
    Value m1;
public:
    Test():ci(10)
    {
    }

    int getCI(){ return ci; }
};

int main()
{
    Test t;

    cout<<"t.ci="<<t.getCI()<<endl;

    return 0;
}
