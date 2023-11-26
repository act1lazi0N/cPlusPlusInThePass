#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    freopen("DDELETE.INP","r",stdin);
    freopen("DDELETE.OUT","w",stdout);
    int n;
    cin>>n;
    ll s=0;
    int nChan=0, nLe=0;
    for(int i=1; i<=n; i++){
        int temp;
        cin>>temp;
        s=s+temp;
        if((temp%2)==0) nChan++;
        else nLe++;
    }
    if((s%2)==0){
        cout<<(nChan*(nChan-1))/2+(nLe*(nLe-1))/2;
    }
    else{
        cout<<nChan*nLe;
    }
    return 0;
}
