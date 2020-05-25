#include<iostream>
using namespace std;

class Test
{
private:
    int i;
    int j;
public:
    int getI()
    {
        return i;
    }
    int getJ()
    {
        return j;
    }

#if 0
    Test(const Test &t)
    {
        i = t.i;
        j = t.j;
    }

    Test()
    {
    }
#endif
};

int main()
{
    Test t1;
    Test t2 = t1;

    cout<<"t1.i="<<t1.getI()<<endl;
    cout<<"t2.i="<<t2.getI()<<endl;

    cout<<"t1.j="<<t1.getJ()<<endl;
    cout<<"t2.j="<<t2.getJ()<<endl;

    return 0;
}
