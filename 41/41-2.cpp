#include <iostream>
#include <string>

using namespace std;

class Test
{
    int mValue;
public:
    Test()
    {
        mValue = 0;
    }
    
    /*转换构造函数,explicit避免编译器隐式类型转换*/
    explicit Test(int i)
    {
        mValue = i;
    }
    
    Test operator + (const Test& p)
    {
        Test ret(mValue + p.mValue);
        
        return ret;
    }
    
    int value()
    {
        return mValue;
    }
};

int main()
{   
    Test t;
    
    
    t = static_cast<Test>(5);    // t = Test(5)，实质是通过直接调用构造函数产生临时对象赋值给对象的成员变量,由于只赋值给一个变量，所有构造函数只能有一个参数;
    
    
    
    Test r;
    
    r = t + static_cast<Test>(10);   // r = t + Test(10);
    
    cout << r.value() << endl;
    
    return 0;
}

