#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n=0;cin>>t;int kq[t];
    string s;char x;
    for (int i=0;i<t;i++)
    {
        cin>>s;n=0;
        for (int j=97;j<=122;j++)
        {
            x=j;
            if (s.find(x)==s.rfind(x)&&s.find(x)<kq[i])
                {kq[i]=s.find(x)+1;n=1;}
        }
        if (n==0) kq[i]=-1;
    }
    for(int i=0;i<t;i++) cout<<kq[i]<<endl;
    return 0;
}
