/*
从程序的角度，对象只是变量，因此：
-在栈上创建对象时，成员变量初始为随机值
-在堆上创建对象时，成员变量初始为随机值
-在静态存储区创建对象时，成员变量初始为0
*/

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

        void initialize()
        {
            i = 1;
            j = 2;
        }
};

Test gt;

int main()
{
    gt.initialize();

    Test t1;
    t1.initialize();

    cout<<"t1.i="<<t1.getI()<<endl;
    cout<<"t1.j="<<t1.getJ()<<endl;

    cout<<"gt.i="<<gt.getI()<<endl;
    cout<<"gt.j="<<gt.getJ()<<endl;

    Test *pt = new Test;
    pt->initialize();

    cout<<"pt->i="<<pt->getI()<<endl;
    cout<<"pt->j="<<pt->getJ()<<endl;

    delete pt;

    return 0;
}
