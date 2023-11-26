#include <bits/stdc++.h>
#define ll long long
#define N 100002
using namespace std;
int a[N];
int timMax(int i, int j){
    int res = 0;
    for(int k=i; k<=j; k++){
        res = max(res,a[k]);
    }
    return res;
}
int main()
{
    freopen("THREENUM.INP","r",stdin);
    freopen("THREENUM.OUT","w",stdout);
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    int S = 0;
    for(int i=2; i<n; i++){
        int x = timMax(1,i-1);
        int y = a[i];
        int z = timMax(i+1, n);
        int temp = 2*x - 3*y + 5*z;
        S = max(S,temp);
    }
    cout<<S;
    return 0;
}
