#include<bits/stdc++.h>
using namespace std;
bool thang(long long n)
{
    long long so=0;
    if(n<10)
    {
        return false;
    }
    else
        while(n>=10)
        {
            so=n%10;
            n=n/10;
            if(so< (n%10))
            {
                return false;
            }
        }
    return true;
}
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
        if(thang(a[i])==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
