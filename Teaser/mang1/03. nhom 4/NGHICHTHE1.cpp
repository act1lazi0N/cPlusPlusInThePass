#include<bits/stdc++.h>
#define ll long long
#define N 102
using namespace std;
ll x[N];int i, n,d;
int main(){
	freopen("NGHICHTHE1.INP","r",stdin);
	freopen("NGHICHTHE1.OUT","w",stdout);
	cin>>n;
	for(int k=1;k<=n;k++) {
		cin >> x[k];
 	} i=1;
	while (i<=n){
	d=0;
 	for(int j=1;j<=i;j++) {
		if(x[j]> x[i]) d++;
 	}
 	cout<<d<<" ";
 	i++;
	}

	return 0;
}
