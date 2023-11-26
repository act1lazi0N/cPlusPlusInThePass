#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("QSUM.INP","r",stdin);
    freopen("QSUM.OUT","w",stdout);
    int N, Q;
    cin>>N>>Q;
    int a[N+1], b[N+1];
    int s=0;
    for(int i=1; i<=N; i++){
        cin>>a[i];
        s = s+a[i];
        b[i]=s;
    }
    for(int i=1; i<=Q; i++){
        int d,c;
        cin>>d>>c;
        cout<<b[c]-b[d]+a[d]<<endl;
    }
    return 0;
}
