#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    int n;
    cin>>n;
    cin>>s1;int k=1,t=0;
    for(int i=1;i<n;i++)
    {
        s2=s1.substr(0,i);
        for(int j=1;j<=n-i;j++)
            {
                s3=s1.substr(j,i);
             if(s2!=s3){k++;break;}
            }
        if(k==n-i){t=i+1;break;}
    }
    if(t==n)cout<<0;
    else cout<<t;
}
