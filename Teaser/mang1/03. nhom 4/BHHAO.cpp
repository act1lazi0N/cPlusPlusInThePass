#include <bits/stdc++.h>
#define ll long long
using namespace std;
int hhao[91];
bool numHHAO(int n){
    int d = 0;
    for(int i=1; 2*i<=n; i++){
        if((n%i)==0){
            d=d+i;
        }
    }
    if(d==n) return true;
    return false;
}
void soHoanHao(){
    for(int i=1; i<=90; i++){
        if(numHHAO(i)) hhao[i]=1;
    }
}
int demChuSo(ll n){
    int s=0;
    while(n!=0){
        s=s+(n%10);
        n=n/10;
    }
    return s;
}
int main()
{
    freopen("BHHAO.INP","r",stdin);
    freopen("BHHAO.OUT","w",stdout);
    soHoanHao();
    int n;
    cin>>n;
    int d=0;
    for(int i=1; i<=n; i++){
        ll temp;
        cin>>temp;
        if(hhao[demChuSo(temp)]==1) d++;
    }
    cout<<d;
    return 0;
}
