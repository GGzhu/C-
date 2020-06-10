#include<iostream>
#include<string>

using namespace std;

#define SWAP(t, a, b) \
do              \
{               \
    t c = a;    \
      a = b;    \
      b = c;    \
}while(0)

int main()
{
    int a = 0;
    int b = 1;

    SWAP(int, a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    double m = 2;
    double n = 3;

    cout << "m = " << m << endl;
    cout << "n = " << n << endl;


    return 0;
}
