#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string reverse(const string& s, const char c)
{
    string str = "";
    string str1 = "";
    string ret = "";
    unsigned int n,pos;

    pos = s.length();
    str1 = s;
    
    while( n=str1.find(c) )
    {
        str = s.substr(0, n);
        str1 = s.substr(n+1, pos);

	cout<<n<<endl;
        cout<<str<<endl;
        cout<<str1<<endl;

        for(int i=0;i<n/2; i++)
        {
            char tmp = str[i];
            str[i] = str[n-i-1];
            str[n-i-1] = tmp;
        }

        ret += str + ";";
        cout<<ret<<endl;
    }     

    return ret;
}

int main()
{
#if 0
    cout << reverse("", ';') << endl;                 // 输出：空字符串
#endif
    cout << reverse(";", ';') << endl;                // 输出：;
    cout << reverse("abcde;", ';') << endl;           // 输出：edcba;
    cout << reverse("we;tonight;you", ';') << endl;   // 输出：ew;thginot;uoy
    
    return 0;
}
