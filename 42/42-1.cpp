#include <iostream>
#include <string>

using namespace std;

class Test
{
    int mValue;
public:
    Test(int i = 0)
    {
        mValue = i;
    }
    int value()
    {
        return mValue;
    }
    /*类型转换函数*/
    operator int ()
    {
        return mValue;
    }
};

int main()
{   
    Test t(100);
    int i = t;  // 类类型转换成普通类型->实质是把类的成员变量赋值给普通变量 
    
    cout << "t.value() = " << t.value() << endl;
    cout << "i = " << i << endl;
    
    return 0;
}

