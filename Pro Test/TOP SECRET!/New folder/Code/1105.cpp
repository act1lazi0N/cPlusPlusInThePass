#include<bits/stdc++.h>
using namespace std;
int t,x,y;

long long ham_16_10(string a)
{
    long long kq=0,e=1;
    for(int i=a.size()-1; i>=0; i--)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            kq+=(a[i]-'0')*e;
            e*=16;
        }
        else
        {
            kq+=(a[i]-'A'+10)*e;
            e*=16;
        }
    }
    return kq;
}

string ham_10_2(long long a0)
{
    string kq;
    while(a0!=0)
    {
        if(a0%2==1)
            kq='1'+kq;
        else
            kq='0'+kq;
        a0/=2;
    }
    return kq;
}

string ham_10_16(long long a0)
{
    string kq;
    int du;
    char c;
    while(a0!=0)
    {
        du=a0%16;
        if(du<=9)
            c=du+'0';
        else
            c='A'+du-10;
        kq=c+kq;
        a0/=16;
    }
    return kq;
}


long long ham_2_10(string a)
{
    long long kq=0,e=1;
    for(int i=a.size()-1; i>=0; i--)
    {
        kq+=(a[i]-'0')*e;
        e*=2;
    }
    return kq;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    long long a0;
    string a;
    while(t--)
    {
        cin>>x>>y;
        if(x==16)
        {
            cin>>a;
            if(y==10) cout<<ham_16_10(a)<<'\n';
            else
                cout<<ham_10_2(ham_16_10(a))<<'\n';
        }
        else
        {
            if(x==10)
            {
                cin>>a0;
                if(y==2)
                    cout<<ham_10_2(a0)<<'\n';
                else
                    cout<<ham_10_16(a0)<<'\n';
            }
            else
            {
                cin>>a;
                if(y==10)
                    cout<<ham_2_10(a)<<'\n';
                else
                    cout<<ham_10_16(ham_2_10(a))<<'\n';
            }
        }
    }
}
