#include<iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout<<"Test()"<<endl;
    }
    Test(int v)
    {
        cout<<"Test(int v), v = "<<v<<endl;
    }
};

int main(void)
{
    Test t;
    Test t1(1);
    Test t2 = 2;

    int i(100);

    cout<<"i = "<<i<<endl;

    return 0;
}
