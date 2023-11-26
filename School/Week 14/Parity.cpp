#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int t;
ll n,dem;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        dem=0;
        while(n!=0)
        {
            if(n%2==1)
            {
                dem++;
            }
            n /= 2;
        }
        if(dem%2==0)
            cout<<"even"<<endl;
        else
            cout<<"odd"<<endl;

    }
}

