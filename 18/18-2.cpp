/*手动调用构造函数*/
#include<iostream>
using namespace std;

class Test
{
private:
    int m_value;
public:
    Test()
    {
        cout<<"Test()"<<endl;
    }
    Test(int v)
    {
        cout<<"Test(int v), v = "<<v<<endl;

        m_value = v;
    }
    int getValue()
    {
        return m_value;
    }
};

int main(void)
{
    Test ta[3] = {Test(), Test(1), Test(2)};

    for(int i=0; i<3; i++)
    {
        cout<<"ta["<<i<<"], getValue["<<ta[i].getValue()<<"]"<<endl;
    }

    Test t = Test(100);

    cout<<"t.getValue["<<t.getValue()<<"]"<<endl;

    return 0;
}
