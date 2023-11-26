#include<bits/stdc++.h>
using namespace std;
int n,m,y,t=0,t1=0,c,z,z1;
int k[3005];
vector<int> kq,x;
int main()
{
    cin>>n>>m>>y;
    c=m;
    if(c%2==0)
    {
        x.push_back(2);
        t1++;
        for(; c%2==0;)
        {
            k[2]++;
            c/=2;
        }
    }
    for(int i=3; i*i<=k; i+=2)
    {
        if(c%i==0)
        {
            t1++;
            x.push_back(i);
            for(; c%i==0;)
            {
                k[i]++;
                c/=i;
            }
        }
    }
    if(c!=1)
    {
        x.push_back(c);
        t1++;
        k[c]=1;
    }
    for(int i=0; i<m; i++)
    {
        c=i;
        int ok=0;
        for(int j=0;j<t1;j++)
        {
            z=x[j];
            z1=0;
            for(;c%z==0;)
            {
                z1++;
                c/=z;
            }
            if(z1*n<k[z])
            {
                break;
                ok=0;
            }
        }
        if(ok==1) kq.push_back(i);
    }
    cout<<kq.size();
}
