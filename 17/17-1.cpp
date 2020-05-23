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
};

Test gt;

int main()
{
    Test t1;

    cout<<"t1.i="<<t1.getI()<<endl;
    cout<<"t1.j="<<t1.getJ()<<endl;

    cout<<"gt.i="<<gt.getI()<<endl;
    cout<<"gt.j="<<gt.getJ()<<endl;

    Test *pt = new Test;

    cout<<"pt->i="<<pt->getI()<<endl;
    cout<<"pt->j="<<pt->getJ()<<endl;

    delete pt;

    return 0;
}
