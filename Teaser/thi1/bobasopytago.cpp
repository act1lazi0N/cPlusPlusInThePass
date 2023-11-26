#include<bits/stdc++.h>
using namespace std;

long long n,a[10001];

void sub1() {
    long long ans=0;
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
            for(int k=j+1;k<=n;k++){
                int a1 = a[i];
                int a2 = a[j];
                int a3 = a[k];
                if (a1*a1 == a2*a2 + a3*a3 || a2*a2== a1*a1+a3*a3 || a3*a3== a1*a1+a2*a2)
                    ans++;
            }
    cout<<ans;
}

bool kt[20001];

void sub2() {
    memset(kt, false, sizeof(kt));
    for(int i=1;i<=n;i++)
        kt[a[i]]=true;
    long long ans=0;
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++){
            long long c=a[i]*a[i]+a[j]*a[j];
            long long can=sqrt(c);
            if(can*can==c && kt[can]==true) ans++;
        }
    cout<<ans;
}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    sub2();
}
