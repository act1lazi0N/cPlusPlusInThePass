#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string x,y;char m;
    cin>>x>>y;
    for (int i=97;i<=122;i++)
    {
        m=i;
        if (x.find(m)!=-1&&y.find(m)!=-1) cout<<m<<endl;
    }
    return 0;
}
