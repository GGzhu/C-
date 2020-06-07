#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    ostringstream ostr1;
    ostringstream ostr2("abd");

    ostr1 << "ostr1" << 2012 <<endl;
    cout << ostr1.str();

    long curPos = ostr2.tellp();    
    cout << "curPos = " << curPos << endl;

    ostr2.seekp(2);
    ostr2.put('g');
    cout << ostr2.str();

    ostr2.clear();
    ostr2.str("");

    cout << ostr2.str() << endl;
    ostr2.str("_def");

    cout << ostr2.str() << endl;
    ostr2 << "ggghh" ;

    cout << ostr2.str() << endl;

    return 0;
}
