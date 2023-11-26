#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string x,y;char m;
    cin>>x>>y;
    for (int i=97;i<=122;i++)
    {
        m=i;
        if (x.find(m) == y.find(m)) cout<<m<<endl;
    }
    return 0;
}
