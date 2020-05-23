#include<iostream>
using namespace std;

class Test
{
    private:
        int i;
        int j;
    public:
        int getI(){ return i; };
        int getJ(){ return j; };

        Test()
        {
            cout<<"Test() Begin"<<endl;
            i = 1;
            j = 2;
            cout<<"Test() End"<<endl;
        }
};

Test gt;

int main()
{

    cout<<"gt.i="<<gt.getI()<<endl;
    cout<<"gt.j="<<gt.getJ()<<endl;

    Test t1;

    cout<<"t1.i="<<t1.getI()<<endl;
    cout<<"t1.j="<<t1.getJ()<<endl;

    Test *pt = new Test;

    cout<<"pt->i="<<pt->getI()<<endl;
    cout<<"pt->j="<<pt->getJ()<<endl;

    delete pt;

    return 0;
}
