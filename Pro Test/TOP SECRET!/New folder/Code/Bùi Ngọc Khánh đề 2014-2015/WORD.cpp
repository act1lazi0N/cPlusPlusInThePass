#include<bits/stdc++.h>
using namespace std;

string s,r1,r2,kq;
int dem=0,i,t;

int main()
{
    freopen("WORD.IN","r",stdin);
    freopen("WORD.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    getline(cin,s);

    if(s[0]!=' ')
    {
        r1=r2=s[0];
        s[0]-=32;
    }
    for(i=1;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
            r1=r1+s[i];
            r2=s[i]+r2;
            t=1;
        }
        else
        {
            if(t==1)
            {
                t=0;
                if(r1==r2)
                {
                    dem++;
                    kq=kq+r1+' ';
                }
                r1="";
                r2="";
            }
        }
        if(s[i-1]==' '&&s[i]!=' ')
        {
            s[i]-=32;
        }
    }
    if(t==1)
    {
        t=0;
        if(r1==r2)
        {
            dem++;
            kq=kq+r1+' ';
        }
        r1="";
        r2="";
    }

    cout<<s<<'\n';
    if(dem!=0)
        cout<<kq<<dem;
    else
        cout<<"khong co";
}
