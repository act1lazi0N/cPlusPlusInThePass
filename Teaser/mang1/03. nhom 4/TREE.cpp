#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TREE.INP","r",stdin);
    freopen("TREE.OUT","w",stdout);
    int n, k;
    cin>>n>>k;
    int a[n+1], b[n+1], c[n+1];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    int d=0;
    for(int i=2; i<=n; i++){
        int temp = a[i]-a[i-1];
        if(temp>k){
            b[i]=-1;
            c[i]=temp-k;
            d++;
        }
        else{
            if(temp<k){
                b[i]=1;
                c[i]=k-temp;
                d++;
            }
        }
    }
    cout<<d<<endl;
    for(int i=2; i<=n; i++){
        if(c[i]>0){
            if(b[i]>0){
                cout<<"+ "<<i<<" "<<c[i]<<endl;
            }
            if(b[i]<0){
                cout<<"- "<<i<<" "<<c[i]<<endl;
            }
        }
    }
    return 0;
}
