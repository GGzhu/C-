#include<iostream>
using namespace std;

class Test
{
private:
    int i;
    int j;
    int *p;
public:
    int *getP()
    {
        return p;
    }
    int getI()
    {
        return i;
    }
    int getJ()
    {
        return j;
    }

    Test(const Test &t)
    {
        i = t.i;
        j = t.j;
        p = new int;

        *p = *t.p;
        cout<<"I am copy"<<endl;
    }

    Test(int v)
    {
        i = 1;
        j = 2;
        p = new int;

        *p =v;
        cout<<"I am nomal"<<endl;
    }

    void free()
    {
        delete p;
    }
};

int main()
{
    Test t1(3);
    Test t2(t1);

    cout<<"t1.i="<<t1.getI()<<endl;
    cout<<"t2.i="<<t2.getI()<<endl;

    cout<<"t1.j="<<t1.getJ()<<endl;
    cout<<"t2.j="<<t2.getJ()<<endl;

    cout<<"t1.p = "<<t1.getP()<<endl;
    cout<<"t2.p = "<<t2.getP()<<endl;

    cout<<"t1.p = "<<*t1.getP()<<endl;
    cout<<"t2.p = "<<*t2.getP()<<endl;

    t1.free();
    t2.free();

    return 0;
}
