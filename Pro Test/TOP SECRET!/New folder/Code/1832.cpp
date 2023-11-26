#include<bits/stdc++.h>
using namespace std;
int t,n;
char a;
int main()
{
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int r=0,g=0,b=0;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>a;
            if(a=='R') r++;
            else
                if(a=='G') g++;
                else b++;
        }
        cout<<n-max(r,max(b,g))<<'\n';
    }
}
