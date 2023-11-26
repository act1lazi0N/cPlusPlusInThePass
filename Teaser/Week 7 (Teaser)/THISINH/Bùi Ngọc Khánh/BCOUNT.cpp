#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;getline(cin,s);int kq[10],t;
    for(int i=0;i<10;i++) kq[i]=0;
    for (int i=0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            t=s[i]-'0';
            kq[t]++;
        }
    }
    for(int i=0;i<9;i++) cout<<kq[i]<<" ";
    cout<<kq[9];
    return 0;
}
