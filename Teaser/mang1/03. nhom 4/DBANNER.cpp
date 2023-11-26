#include<bits/stdc++.h>
#define ll long long
#define N 1002
using namespace std;
ll a[N];ll dt,maxa, n;
int main(){
	freopen("DBANNER.INP","r",stdin);
	freopen("DBANNER.OUT","w",stdout);
	cin>>n;
	maxa=n;
	for(int k=1;k<=n;k++) {
		cin >> a[k];
 	}
 	for(int i=1;i<=n;i++) {
		dt=0;
		for(int j=1;j<=n;j++) {
			if (a[j]>=a[i]) {
			dt+=a[i];
			}
			else  {
				if (dt>maxa) maxa=dt;
				dt=0;
			}
		if (dt>maxa) maxa=dt;

		}
	}
    cout<< maxa;

	return 0;
}
