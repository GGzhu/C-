#include<iostream>
#include "IntArray.h"
using namespace std;

int main()
{
    IntArray a(5);

    for(int i=0; i<a.length(); i++)
    {
        a.set(i, i+1);
    }

    for(int i=0; i<a.length(); i++)
    {
        int value = 0;
        if( a.get(i, value) )
        {
            cout<<"value["<<value<<"]"<<endl;
        }
    }

    return 0;
}
