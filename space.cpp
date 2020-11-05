#include <iostream>
#include <algorithm>

using namespace std;

int dlugosc=0;
string sms;

int main()
{
    while (getline(cin,sms))
    {
    dlugosc=sms.length();
    for (int i=0; i<dlugosc; i++)
    {
        if (sms[i]==' ') {continue;}
        if ((sms[i]!=' ')&&(sms[i-1]==' '))
        {
            sms[i]=toupper(sms[i]);
            cout<<sms[i];
        }
        else
        {
            cout<<sms[i];
        }
    }
    cout<<endl;
    }
    return 0;
}
