#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("BKID.INP","r",stdin);
    freopen("BKID.OUT","w",stdout);
    int n;
    cin>>n;
    int csdau=1, dau;
    cin>>dau;
    for(int i=2; i<=n; i++){
        int temp;
        cin>>temp;
        if(temp<dau){
            cout<<csdau<<endl;
            dau = temp;
            csdau = i;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}
