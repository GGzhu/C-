#include<iostream>
using namespace std;

class Test
{
private:
    const int ci;
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
