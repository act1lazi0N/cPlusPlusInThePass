#include<bits/stdc++.h>
using namespace std;
int a[15];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(;;)
    {
        long long t=0;
        for(int i=0;i<12;i++)
        {
            cin>>a[i];
            t+=a[i];
        }
        if(t==0) return 0;
        sort(a,a+12);
        if((a[0] == a[3]) && (a[4] == a[7]) && (a[8] == a[11])) cout<< "yes\n";
        else cout<<"no\n";
    }
}
