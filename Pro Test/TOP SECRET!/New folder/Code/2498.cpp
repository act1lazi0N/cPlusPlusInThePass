#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    for(int i=0;i<t;i++)
    {
        int m,b;
        cin>>m>>b;
        long long kq=0;
        for(int y=0;y<=b;y++)
        {
            int x = 1LL * (b - y) * m;
            kq=max(kq,1LL*(x+1)*(y + 1)*(x + y)/2);
        }
        cout<<kq<<endl;
    }
}
