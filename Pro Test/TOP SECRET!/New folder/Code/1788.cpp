#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x1,y1,x2,y2,t1,t2,kq=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x1>>y1>>x2>>y2;
        t1=abs(x2-x1)+1;
        t2=abs(y2-y1)+1;
        kq+=(t1*t2);
    }
    cout<<kq;
}
