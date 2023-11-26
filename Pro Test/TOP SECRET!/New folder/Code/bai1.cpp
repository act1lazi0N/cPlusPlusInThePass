#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
int kq( int i)
{
    int k=0;
    while(i>0)
    {
        k+=i%10;
        i/=10;
    }
    return k;
}
int xet(int i)
{
    int k=0;
    while(i>0)
    {
        k=k*10+i%10;
        i/=10;
    }
    return k;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int l,r;
    while(cin>>l>>r)
    {
        int dem=0;
        for(int i=l; i<=r; i++)
        {
            if(kq(i)%10==0&& xet(i)==i)
            {
                dem++;
            }//cout<<i<<endl;}
        }
        cout<<dem<<'\n';

    }
}
