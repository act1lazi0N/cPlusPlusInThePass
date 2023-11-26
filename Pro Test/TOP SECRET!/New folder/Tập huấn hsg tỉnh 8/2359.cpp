#include<bits/stdc++.h>
using namespace std;

int n, cnt[5]={0,0,0,0,0};
pair<int,int> a[400005];

bool good(){
    for(int i=1;i<=4;i++)
        if(cnt[i]==0)return false;
    return true;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("2359.inp","r",stdin);
    freopen("2359.out","w",stdout);
    for(int i=1;i<=4;i++){
        int m;
        cin>>m;
        for(int j=1;j<=m;j++){
            cin>>a[++n].first;
            a[n].second=i;
        }
    }
    sort(a+1,a+1+n);
    int dif=INT_MAX,x,y;
    for(int l=1,r=1;r<=n;r++){
        cnt[a[r].second]++;
        while(good()){
            if(dif>a[r].first-a[l].first){
                dif=a[r].first-a[l].first;
                x=l;
                y=r;
            }
            cnt[a[l].second]--;
            l++;
        }
    }
    int color[5];
    for(int i=x;i<=y;i++)
        color[a[i].second]=a[i].first;
    for(int i=1;i<=3;i++)cout<<color[i]<<" ";
    cout<<color[4];
}
