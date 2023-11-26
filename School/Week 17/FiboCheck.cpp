#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==2)
            cout<<3<<endl;
        if(n==1)
            cout<<1<<endl;
        if(n>=3)
        {

            long long a=1,b=2,c=0,dem=3;
            while(c<n)
            {
                c=a+b;
                a=b;
                b=c;
                dem++;
                if(c>n)
                {
                    cout<<-1<<endl;
                }
                if(c==n)
                {
                    cout<<dem<<endl;
                }

            }
        }
    }
    return 0;
}
