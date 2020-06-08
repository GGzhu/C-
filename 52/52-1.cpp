#include<iostream>
#include<string>

using namespace std;

/*抽象类*/
class Shape 
{
public:
    virtual double area() = 0;   //纯虚函数
};

class Rect : public Shape
{
    int ma;
    int mb;
public:
    Rect(int a, int b)
    {
        ma = a;
        mb = b;
    }
    double area()
    {
        return ma * mb;
    }
};

class Circle : public Shape 
{
    int mr;
public:
    Circle(int r)
    {
        mr = r;
    }
    double area()
    {
        return 3.14 * mr * mr;
    }
};

void area(Shape* p)
{
    p->area();
}

int main()
{
    Rect rect(1, 2);
    Circle circle(10);

    area(&rect);
    area(&circle);

    return 0;
}
