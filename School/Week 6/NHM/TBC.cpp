#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    float a[n],p=0,min0,vt;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        p+=a[i];
    }
    p=p/n;
    min0=abs(p-a[0]);
    vt=a[0];
    for(int i=1; i<n; i++)
    {
        if(abs(p-a[i]) < min0)
        {
            min0=abs(p-a[i]);
            vt=a[i];
        }
    }
    cout<<fixed<<setprecision(2)<<p<<'\n'<<vt;
}
